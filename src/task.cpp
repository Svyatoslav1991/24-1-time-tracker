#include "task.h"


Task::Task(std::string name) : m_name(name), m_status(TaskStatus::atWork), m_workTime(0.)
{
	m_startTime = std::time(nullptr);
}

//**********************************************************************************************

void Task::finish()
{
	if (m_status == TaskStatus::atWork)
	{
		m_status = TaskStatus::over;

		std::time_t currentTime = std::time(nullptr);
		m_workTime = std::difftime(currentTime, m_startTime);
	}
}

//**********************************************************************************************

TaskStatus Task::getTakStatus() const
{
	return m_status;
}

//**********************************************************************************************

std::string Task::getName() const
{
	return m_name;
}

//**********************************************************************************************

double Task::getWorkTime() const
{
	return m_workTime;
}