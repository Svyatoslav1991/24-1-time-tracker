#pragma once

#include <iostream>
#include <limits>
#include <list>

#include "task.h"

//variable value input function
template <typename T>
T myCin() noexcept
{
    bool good = true;

    T variable;

    do
    {
        std::cout << "Enter the value of the variable: ";
        std::cin >> variable;

        good = std::cin.good();

        if (!good)
        {
            std::cout << "You entered something wrong\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!good);

    return variable;
}


//complete the previous task and start a new one
void addNewTask(std::list<Task>& taskList) noexcept;

//complete last task
void finishLastTask(std::list<Task>& taskList) noexcept;

//print information about tasks
void printStatusTasks(const std::list<Task>& taskList) noexcept;