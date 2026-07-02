#include<iostream>
using namespace std;

// Employee
int id[10];
string name[10], gender[10], position[10];
float salary[10];
int n;

void Input(){
    cout<<"\n";
    cout<<"<=============Input Data============>\n";
    cout<<"\n";
    cout<<"Enter number of employee = ";cin>>n;
    for(int i=0; i<n; i++){
        cout<<"\n";
        cout<<"<=============Employee["<<i+1<<"]===============>\n";
        cout<<"\n";
        cout<<"Input ID     : ";cin>>id[i];
        cout<<"Input Name   : ";cin>>name[i];
        cout<<"Input Gender : ";cin>>gender[i];
        cout<<"Input Position : ";cin>>position[i];
        cout<<"Input Salary   : ";cin>>salary[i];
    }
}
void Output(){
    cout<<"\n";
    cout<<"<===================Output Data================>\n";
    for(int i=0; i<n; i++){
        cout<<"\n";
        cout<<"<=============Employee["<<i+1<<"]===============>\n";
        cout<<"\n";
        cout<<"ID       : "<<id[i]<<endl;
        cout<<"Name     : "<<name[i]<<endl;
        cout<<"Gender   : "<<gender[i]<<endl;
        cout<<"Position : "<<position[i]<<endl;
        cout<<"Salary   : "<<salary[i]<<endl;
    }
}
void Update(){
    cout<<"\n";
    cout<<"<================Update Data================>\n";
    int SearchById;
    bool check = false;
    cout<<"Search ID to update data of employee  = ";cin>>SearchById;
    for(int i=0; i<n; i++){
        if(SearchById == id[i]){
            cout<<"\n";
            cout<<"Please update Data\n";
            cout<<"\n";
            cout<<"Update ID      : ";cin>>id[i];
            cout<<"Update Name    : ";cin>>name[i];
            cout<<"Updtae Gender  : ";cin>>gender[i];
            cout<<"Update Position : ";cin>>position[i];
            cout<<"Update Salary  : ";cin>>salary[i];
            cout<<"\n";
            check = true;
            cout<<"Update data success\n"; 
        }
    }
    if(!check){
        cout<<"searchId to update data of employee not found\n";
    }
}
void Delete(){
    cout<<"\n";
    cout<<"<====================Delete Data====================>\n";
    string Byname;
    bool check = false;
    cout<<"\n";
    cout<<"Search Name to delete = ";cin>>Byname;
    for(int i=0; i<n; i++){
        if(Byname == name[i]){
            for(int j=0; j<n-i; j++){
                id[j] = id[j+1];
                name[j] = name[j+1];
                gender[j] = gender[j+1];
                position[j] = position[j+1];
                salary[j] = salary[j+1];
            }
            n--;
            check = true;
            cout<<" \n";
            cout<<"Delete Data Success\n";
        }
    }
    if(!check){
        cout<<"\n";
        cout<<"search name to delete not found\n";
    }
}
void Insert(){
    cout<<"\n";
    cout<<"<=======================Insert Data====================>\n";
    int add;
    cout<<"\n";
    cout<<"Add number of data = ";cin>>add;
    for(int i=n; i<n+add; i++){
        cout<<"\n";
        cout<<"<=================Employee["<<i+1<<"]===============>\n";
        cout<<"\n";
        cout<<"Input ID     : ";cin>>id[i];
        cout<<"Input Name   : ";cin>>name[i];
        cout<<"Input Gender : ";cin>>gender[i];
        cout<<"Input Position : ";cin>>position[i];
        cout<<"Input Salary   : ";cin>>salary[i];
    }
    n+=add;
    cout<<"Add data Success\n";
}

int main(){

    int op;

    do{
        cout<<"\n";
        cout<<"===================\n";
        cout<<"1. Input Data      \n";
        cout<<"2. Output Data     \n";
        cout<<"3. Update Data     \n";
        cout<<"4. Delete Data     \n";
        cout<<"5. Insert Data     \n";
        cout<<"6. Exit............\n";
        cout<<"===================\n";
        cout<<"\n";
        cout<<"Please choose options = ";cin>>op;

        switch(op){
            case 1:{
                Input();
                break;
            }
            case 2:{
                Output();
                break;
            }
            case 3:{
                Update();
                break;
            }
            case 4:{
                Delete();
                break;
            }
            case 5:{
                Insert();
                break;
            }
            case 6:{
                cout<<"exit............\n";
                break;
            }
            case 7:{
                system("cls");
                break;
            }
            default:{
                cout<<"Option not found\n";
                break;
            }
        }

    }while(op != 6);


    return 0;
}