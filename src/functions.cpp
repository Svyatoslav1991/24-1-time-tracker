#include "functions.h"

//complete the previous task and start a new one
void addNewTask(std::list<Task>& taskList) noexcept
{
	if (!taskList.empty())
	{
		taskList.back().finish();
	}

	std::string taskName;

	do
	{
		std::cout << "New task name\n";
		taskName = myCin<decltype(taskName)>();
	} while (taskName == "");

	taskList.push_back(Task(taskName));

	std::cout << "New task " << taskName << " has been added\n";
}

//*****************************************************************************

//complete last task
void finishLastTask(std::list<Task>& taskList) noexcept
{
	if (taskList.empty())
	{
		std::cout << "Task list is empty\n";
	}
	else if (taskList.back().getTakStatus() == TaskStatus::over)
	{
		std::cout << "There are no running tasks.\n";
	}
	else
	{
		taskList.back().finish();
		std::cout << "Task " << taskList.back().getName() << " completed\n";
	}
}

//*****************************************************************************

//print information about tasks
void printStatusTasks(const std::list<Task>& taskList) noexcept
{
	if (taskList.empty())
	{
		std::cout << "Task list is empty\n";
	}
	else
	{
		std::cout << "\n";
		for (auto it = taskList.cbegin(); it != std::prev(taskList.cend()); ++it)
		{
			std::cout << it->getName() << "\t" << it->getWorkTime() << "\n";
		}

		Task lastTask = taskList.back();

		if (lastTask.getTakStatus() == TaskStatus::over)
		{
			std::cout << lastTask.getName() << "\t" << lastTask.getWorkTime() << "\n";
		}
		else
		{
			std::cout << lastTask.getName() << "\tat work\n";
		}
	}
}