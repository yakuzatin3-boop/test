#include<iostream>
using namespace std;

int main(){

    float num1, num2;
    cout<<"\n";
    cout<<"Input num1 = ";cin>>num1;
    cout<<"Input num2 = ";cin>>num2;

    float *p1 = &num1;
    float *p2 = &num2;

    cout<<"\n";
    cout<<"<+==============Calculate==============+>\n";
    cout<<"*p1 + *p2 = "<<*p1 + *p2<<endl;
    cout<<"*p1 - *p2 = "<<*p1 - *p2<<endl;
    cout<<"*p1 * *p2 = "<<*p1 * *p2<<endl;
    cout<<"*p1 / *p2 = "<<*p1 / *p2<<endl;

    return 0;
}