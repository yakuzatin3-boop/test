#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int *ptr;
    int n1, n2;

    cout<<"\n";
    cout<<"Input size of ptr = ";cin>>n1;       

    ptr = (int*)malloc(n1* sizeof(int));
    cout<<"\n";
    cout<<"Malloc\n";
    cout<<"\n";

    for(int i=0; i<n1; i++){
        cout<<"Input value of ptr = ";cin>>*(ptr + i);
    }

    cout<<"\n";
    cout<<"Add size of ptr = ";cin>>n2;
    
    ptr = (int*)realloc(ptr, n2 * sizeof(int));\
    cout<<"\n";
    cout<<"Realloc\n";
    for(int i = n1; i<n1 + n2; i++){
        cout<<"Add value of ptr = ";cin>>*(ptr + i);
    }
    cout<<"\n";

    for(int i=0; i<n1+n2; i++){
        cout<<"Value of ptr = "<<*(ptr + i)<<endl;
    }


    return 0;
}