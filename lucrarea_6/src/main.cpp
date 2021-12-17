#include "../inc/main.hpp"
#include <thread>
#include <memory>
#include <mutex>

std::mutex m;
void makeACallFromMyPhone( int thread_id)
{
	Phone lock(&m, thread_id);
	std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
	std::cout << "\n#################################  SHARE POINTER  ####################################" << std::endl;

	Server* s = new Server("192.168.0.1");
	auto ptr_server_1 = std::make_shared<Server>(*s);
	std::cout << *ptr_server_1;
	{
		auto ptr_server_2 = ptr_server_1;

		if (ptr_server_2)
			std::cout << "Disconnect server 2 " << *ptr_server_2;
	}

	std::cout << "Disconnect server 1 " << *ptr_server_1;

	std::cout << "\n#################################  UNIQUE POINTER  ###################################" << std::endl;
	
	auto ptr_task_1 = std::make_unique<Task>("Task_1", "Description_1", "Seighit Mihail");
	std::cout << " > ptr_task_1: " << *ptr_task_1;
	
	std::unique_ptr<Task> ptr_task_2 = std::move(ptr_task_1);
	
	if (ptr_task_1)
		std::cout << " > ptr_task_1: " << *ptr_task_1;
	if (ptr_task_2)
		std::cout << " > ptr_task_2: " << *ptr_task_2;

	std::cout << "\n#####################################  MUTEX  ########################################" << std::endl;

	std::thread friend_1(makeACallFromMyPhone, 1);
	std::thread friend_2(makeACallFromMyPhone, 2);
	std::thread friend_3(makeACallFromMyPhone, 3);

	friend_1.join();
	friend_2.join();
	friend_3.join();

	return 0;
}
