#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

string tasks[MAX];
bool completed[MAX] = {false};
int taskCount = 0;

// Function Declarations
void addTask();
void viewTasks();
void markCompleted();
void deleteTask();

int main()
{
    int choice;

    while (true)
    {
        cout << "\n==================================" << endl;
        cout << "      TO-DO LIST MANAGER" << endl;
        cout << "==================================" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Delete Task" << endl;
        cout << "5. Exit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
            case 1:
                addTask();
                break;

            case 2:
                viewTasks();
                break;

            case 3:
                markCompleted();
                break;

            case 4:
                deleteTask();
                break;

            case 5:
                cout << "\n==================================" << endl;
                cout << " Thank You for Using To-Do List!" << endl;
                cout << "==================================" << endl;
                return 0;

            default:
                cout << "Invalid Choice! Please Try Again." << endl;
        }
    }

    return 0;
}

// Add Task Function
void addTask()
{
    if (taskCount >= MAX)
    {
        cout << "Task List is Full!" << endl;
        return;
    }

    cout << "Enter Task: ";
    getline(cin, tasks[taskCount]);

    completed[taskCount] = false;
    taskCount++;

    cout << "Task Added Successfully!" << endl;
}

// View Tasks Function
void viewTasks()
{
    if (taskCount == 0)
    {
        cout << "No Tasks Available." << endl;
        return;
    }

    cout << "\n========== TO-DO LIST ==========" << endl;

    for (int i = 0; i < taskCount; i++)
    {
        cout << i + 1 << ". " << tasks[i];

        if (completed[i])
        {
            cout << " [Completed]";
        }
        else
        {
            cout << " [Pending]";
        }

        cout << endl;
    }
}

// Mark Completed Function
void markCompleted()
{
    if (taskCount == 0)
    {
        cout << "No Tasks Available." << endl;
        return;
    }

    int taskNumber;

    cout << "Enter Task Number: ";
    cin >> taskNumber;
    cin.ignore();

    if (taskNumber >= 1 && taskNumber <= taskCount)
    {
        completed[taskNumber - 1] = true;
        cout << "Task " << taskNumber << " Marked as Completed." << endl;
    }
    else
    {
        cout << "Invalid Task Number." << endl;
    }
}

// Delete Task Function
void deleteTask()
{
    if (taskCount == 0)
    {
        cout << "No Tasks Available." << endl;
        return;
    }

    int taskNumber;

    cout << "Enter Task Number: ";
    cin >> taskNumber;
    cin.ignore();

    if (taskNumber < 1 || taskNumber > taskCount)
    {
        cout << "Invalid Task Number." << endl;
        return;
    }

    for (int i = taskNumber - 1; i < taskCount - 1; i++)
    {
        tasks[i] = tasks[i + 1];
        completed[i] = completed[i + 1];
    }

    taskCount--;

    cout << "Task Deleted Successfully." << endl;
}