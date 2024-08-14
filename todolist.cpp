#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Todo{
    string elucidation;
    bool isCompleted;
    Todo(string eluc) : elucidation(eluc), isCompleted(false) {}
};
void displayMenu(){
    cout<<endl;
    cout<<"****To-Do List Application****"<<endl;
    cout<<"1. Add a task"<<endl;
    cout<<"2. View tasks"<<endl;
    cout<<"3. Delete a task"<<endl;
    cout<<"4. Mark task as completed"<<endl;
    cout<<"5. Mark task as pending"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice: ";
}

void addTask(vector<Todo> &tasks){
    cout<<"Enter the task: ";
    string taskEluc;
    cin.ignore();
    getline(cin,taskEluc);
    tasks.push_back(Todo(taskEluc));
    cout<<"Task added!!!"<<endl;
}

void viewTask(vector<Todo> &tasks){
    if(tasks.empty()){
        cout<<"No tasks to view."<<endl;
    }else{
        cout<<"Enter the task to view: "<<endl;
        for(int i=0;i<tasks.size();i++){
            cout<<i+1<<"."<<tasks[i].elucidation
            <<"["<<(tasks[i].isCompleted? "Completed" : "Pending")<<"]"<<endl;
        }
    }
}

void deleteTask(vector<Todo> &tasks){
    cout<<"Enter the task number to delete: ";
    int taskNum;
    cin>>taskNum;
    if(taskNum < 1 || taskNum > tasks.size()){
        cout<<"Invalid task Number!!!"<< endl;
    }else{
        tasks.erase(tasks.begin() + taskNum-1);
        cout<<"Task deleted successfully!!!"<<endl;
        }
}

void markTaskAsCompleted(vector<Todo> &tasks){
    cout<<"Enter the task number to mark as completed: ";
    int taskNum;
    cin >> taskNum;
    if(taskNum > 0 || taskNum< tasks.size()){
        tasks[taskNum-1].isCompleted= true;
        cout<<"Task marked as completed"<<endl;
    }else{
        cout<<"Invalid task number!!!"<<endl;
    }
}

void markTaskAsPending(vector<Todo> &tasks){
    cout<<"Enter the task number to mark as pending: ";
    int taskNum;
    cin>>taskNum;
    if(taskNum < 1 || taskNum >tasks.size()){
        cout<<"invalid task number!!!"<<endl;
    }else{
        tasks[taskNum-1].isCompleted=false;
        cout<<"Tasks marked as pending!!!"<<endl;
    }

}
int main(){
    vector<Todo> tasks;
    int choice;
    do{
        displayMenu();
        cin>>choice;
        switch(choice){
            case 1:
            addTask(tasks);
            break;
            case 2:
            viewTask(tasks);
            break;
            case 3:
            deleteTask(tasks);
            break;
            case 4:
            markTaskAsCompleted(tasks);
            break;
            case 5:
            markTaskAsPending(tasks);
            break;
            case 6:
            cout<<"Time to exit!!!"<<endl;
            break;
            default:
            cout<<"Invalid choice. Please try again."<<endl;

        }
    }
    while(choice!=6);
    return 0;
}


