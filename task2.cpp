// to do list 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
};

int main() {
    vector<Task> tasks;
    
    while (true) {
        cout << "To-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    cout << "Enter task description: ";
                    cin.ignore();  // Consume the newline character left by previous input
                    string description;
                    getline(cin, description);
                    Task newTask = {description};
                    tasks.push_back(newTask);
                    cout << "Task added.\n";
                    break;
                }
            case 2:
                if (tasks.empty()) {
                    cout << "No tasks to display.\n";
                } else {
                    cout << "To-Do List:\n";
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i].description << endl;
                    }
                }
                break;
            case 3:
                if (tasks.empty()) {
                    cout << "No tasks to delete.\n";
                } else {
                    cout << "Enter the task number to delete: ";
                    int taskNumber;
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        cout << "Task deleted.\n";
                    } else {
                        cout << "Invalid task number.\n";
                    }
                }
                break;
            case 4:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
