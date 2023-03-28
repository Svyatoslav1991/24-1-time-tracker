#include <iostream>
#include <list>

#include "task.h"
#include "functions.h"

int main()
{
	std::cout << "\tTASK 24.1 TIME TRACKER\n";

	std::string command;
	std::list<Task> taskList;

	while (true)
	{
		std::cout << "\nType \"begin\" to start a new task\n";
		std::cout << "Type \"end\" to end the current task\n";
		std::cout << "Type \"status\" to see information about all tasks\n";
		std::cout << "Type \"exit\" to finish programm\n";

		command = myCin<decltype(command)>();

		if (command == "begin")
		{
			addNewTask(taskList);
		}
		else if (command == "end")
		{
			finishLastTask(taskList);
		}
		else if (command == "status")
		{
			printStatusTasks(taskList);
		}
		else if (command == "exit")
		{
			break;
		}
		else
		{
			std::cout << "You enteres something wrong. Try again.\n";
		}
	}


	return 0;
}
