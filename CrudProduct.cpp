#include<iostream>
using namespace std;

int id[50];
string name[50];
int qty[50], dis[50];
float price[50];
int n;

void Input(){
    cout<<"\n";
    cout<<"Enter number of product = ";cin>>n;
    for(int i=0; i<n; i++){
        cout<<"\n";
        cout<<"<=========Product["<<i+1<<"]===========>\n";
        cout<<"";cin>>id[i];
    }
}

int main(){

    int op;

    do{
        cout<<"1. Input data    \n";
        cout<<"Please choose options = ";cin>>op;

        switch(op){
            case 1:{
                cout<<"<==============Input Data===============>\n";
                Input();
                break;
            }
        }
    }while(op != 0);

    return 0;
}