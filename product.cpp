#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"\n";
    cout<<"Enter number of employee = ";cin>>n;
    
    int id[n];
    string name[n];
    string gender[n];
    float salary[n];

    cout<<"\n";
    cout<<"<+==============Input Data==============+>\n";
    cout<<"\n";
    for(int i =0; i<n; i++){
        cout<<"\n";
        cout<<"<+=============Employee["<<i+1<<"]==============+>\n";
        cout<<"Enter ID       : ";cin>>id[i];
        cout<<"Enter Name     : ";cin>>name[i];
        cout<<"Enter Gender   : ";cin>>gender[i];
        cout<<"Enter Salary   : ";cin>>salary[i];
    }


    cout<<'\n';
    return 0;
}