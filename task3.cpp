#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> tasks;
    int choice;
    string task;
    do{
        cout<<"===== TO DO LIST ====="<<endl;
        cout<<"1. Add task"<<endl;
        cout<<"2. View tasks"<<endl;
        cout<<"3. Delete tasks"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            cout<<"Enter task"<<endl;
            getline(cin,task);
            tasks.push_back(task);
            break;
        case 2:
            cout<<"Tasks"<<endl;
            for(int i = 0;i<tasks.size();i++){
                cout<<i+1<<"."<<tasks[i]<<endl;
            }
            break;
        case 3:
            int index;
            cout<<"Enter task number to delete:";
            cin>>index;
            if(index > 0 && index<= tasks.size()){
                tasks.erase(tasks.begin()+ index-1);
                cout<<"Task deleted!"<<endl;
            }else{
                cout<<"Invalid task number"<<endl;
            }
            break;  
        case 4:
            cout<<"Exiting..."<<endl;
            break;      
        default:
        cout<<"Invalid choice!"<<endl;
            break;
        }
    }while(choice != 4);
    return 0;
}