#include<iostream>
using namespace std;

int main(){

    int array[10];
    cout<<"\n";
    for(int i =0; i<10; i++){
        cout<<"Addres of array["<<i<<"] = "<<&array[i]<<endl;
    }
    cout<<"\n";
    cout<<"\n";

    int a = 8;
    int *p = &a;

    cout<<"\n";
    cout<<"Value of a = "<<a <<endl;
    cout<<"Address of a = "<<&a <<endl;
    cout<<"\n";
    cout<<"Value of *p = "<< *p <<endl;
    cout<<"Address of value = "<< p <<endl;
    cout<<"Address of pointer = "<< &p <<endl;

    return 0;
}