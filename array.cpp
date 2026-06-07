#include<iostream>
using namespace std;

int main(){


    int array[90];
    int n, op;

    do{
        cout<<"\n";
        cout<<"1. Input Value    \n";
        cout<<"2. Output Value   \n";
        cout<<"3. Update Value   \n";
        cout<<"4. Delete Value   \n";
        cout<<"5. Exit ........  \n";
        cout<<"\n";
        cout<<"Please choose option : ";cin>>op;

        switch(op){
            case 1: {
                cout<<"\n";
                cout<<"Input number of array = ";cin>>n;
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"Input array["<<i<<"] = ";cin>>array[i];
                }
            }
            case 2:{
                cout<<"\n";
                cout<<"<===============Output Value=============\n";
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"array["<<i<<"] = "<<array[i]<<endl;
                }
            }
            case 3:{
                cout<<"\n";
                cout<<"<=============Update Value=============>\n";
                cout<<"\n";
                int index ;
                bool check = false;
                cout<<"Input index to search value = ";cin>>index;
                for(int i=0; i<n; i++){
                    if(index == i){
                        cout<<"\n";
                        cout<<"please Update Value \n";
                        cout<<"Update value of array["<<i<<"] = ";cin>>array[i];
                        check = true;
                    }
                }
                if(!check ){
                    cout<<"Search not found\n";
                }
            }
            case 4:{
                cout<<"\n";
                cout<<"<==============delete Value===============>\n";
                cout<<"\n";
                int index ;
                bool check = false;

                for(int i=0; i<n; i++){
                    if(index == i){
                        for(int j=i; j<n-1; j++){
                            array[j] = array[j+1];
                        }
                        n--;
                        check = true;
                        cout<<"Delete value sucess\n";
                    }
                }
            }
        }


    }while(op != 5);

    return 0;
}