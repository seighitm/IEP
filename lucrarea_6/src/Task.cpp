#include "../inc/Task.hpp"

unsigned Task::_id = 0;

Task::Task(std::string title, std::string description, std::string person_name)
	: _title(title), _description(description), _person_name(person_name)
{
	_id++;
	std::cout << " > Task created\n";
}

Task::~Task()
{
	std::cout << " > Task destroyed\n";
}


std::string Task::get_title()
{
	return _title;
}

std::string Task::get_description()
{
	return _description;
}

std::string Task::get_person_name()
{
	return _person_name;
}

unsigned Task::get_id()
{
	return _id;
}

void Task::set_title(const std::string t)
{
	_title = t;
}

void Task::set_description(const std::string d)
{
	_description = d;
}

void Task::set_person_name(const std::string pn)
{
	_person_name = pn;
}

std::ostream& operator<<(std::ostream& out, Task& t)
{
	out << " { ID: " << t.get_id() << "; TITLE: " << t.get_title() << "; DESCRIPTION: " << t.get_description() <<
		"; PERSON_NAME: " << t.get_person_name() << " }" << std::endl;
	return out;
}
