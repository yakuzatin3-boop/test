#include<iostream>
using namespace std;

int main(){
    
    cout<<"\n";
    int n;
    cout<<"Input size of array = ";cin>>n;
    int array[n];
    int *p = array;
    cout<<"\n";

    for(int i=0; i<n; i++){
        cout<<"Input array pointer p["<<i<<"] = ";cin>>*(p + i);
    }
    cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<"arrya pointer p["<<i<<"] = "<<*(p + i)<<endl;
    }

    return 0;
}