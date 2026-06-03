#include<iostream>
using namespace std;

int main(){

    int num = 600;
    int *p1, **p2, ***p3, ****p4, *****p5;

    p1 = &num;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;

    cout<<"\n";
    cout<<"=========Value=======\n";
    cout<<"Value of num = "<<num<<endl;
    cout<<"Value of *p1 = "<<*p1<<endl;
    cout<<"Value of **p2 = "<<**p2<<endl;
    cout<<"Value of **p3 = "<<***p3<<endl;
    cout<<"Value of ****p4 = "<<****p4<<endl;
    cout<<"Value of *****p5 = "<<*****p5<<endl;

    *****p5 = 9999;

    cout<<"==============Value===============\n";
    cout<<"Value of num = "<<num<<endl;
    cout<<"Value of *p1 = "<<*p1<<endl;
    cout<<"Value of **p2 = "<<**p2<<endl;
    cout<<"Value of **p3 = "<<***p3<<endl;
    cout<<"Value of ****p4 = "<<****p4<<endl;
    cout<<"Value of *****p5 = "<<*****p5<<endl;

    return 0;
}