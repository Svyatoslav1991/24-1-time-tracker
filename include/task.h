#pragma once
#include <string>
#include <ctime>

enum class TaskStatus {atWork, over};

class Task
{
public:
	Task(std::string name);
	void finish();
	TaskStatus getTakStatus() const;
	std::string getName() const;
	double getWorkTime() const;

private:
	std::time_t m_startTime;
	std::string m_name;
	TaskStatus m_status;
	double m_workTime;
};
