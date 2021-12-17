#pragma once
#include <iostream>

class Task
{
public :
	static unsigned _id;

private:
	std::string _title = "";
	std::string _description = "";
	std::string _person_name = "";

public:
	Task(std::string, std::string, std::string);
	~Task();
	Task(const Task&) = delete;
	Task& operator=(const Task&) = delete;
	std::string get_title();
	std::string get_description();
	std::string get_person_name();
	static unsigned get_id();
	void set_title(const std::string);
	void set_description(const std::string);
	void set_person_name(const std::string);
	friend std::ostream& operator<<(std::ostream&, Task&);
};
