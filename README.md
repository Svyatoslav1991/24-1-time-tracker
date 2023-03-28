# 24-1-time-tracker

Using the std::time function to get the current time, implement a simple time tracking manager.
The user interacts with the program using commands:
The begin command starts tracking a new task. After entering this command, the user must enter the name of the task on which he plans to work now. If some other task has already been started, the previous one should be automatically completed and a new one started.
The end command ends tracking the current task. If there is no currently started task, then the command does nothing.
The status command displays information about all completed tasks and the time spent on them. The name of the currently running task, if any, is also displayed.
The exit command exits the program.
