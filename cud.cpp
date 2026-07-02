#include<iostream>
using namespace std;


int main(){

    int array[20];
    int n, op;

    do{
        cout<<"\n";
        cout<<"<====================>\n";
        cout<<"1. Input Value        \n";
        cout<<"2. Output Value       \n";
        cout<<"3. Update Value       \n";
        cout<<"4. Delete Value       \n";
        cout<<"5. Sort Value         \n";
        cout<<"6. Exit ..............\n";
        cout<<"======================\n";
        cout<<"Please choose options = ";cin>>op;

        switch(op){
            case 1:{
                cout<<"\n";
                cout<<"<============Input Value==============>\n";
                cout<<"Input number of array = ";cin>>n;
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"Input value of array["<<i<<"] = ";cin>>array[i];
                }
                cout<<"\n";
                cout<<"Input value  of aaray sucessed\n";
                cout<<"\n";
                break;
            }
            case 2:{
                cout<<"\n";
                cout<<"<===============Output Value=============>\n";
                cout<<"\n";
                for(int i=0; i<n; i++){
                    cout<<"Value of array["<<i<<"] = "<<array[i]<<endl;
                }
                cout<<"\n";
                cout<<"Output Sucessed\n";
                break;
            }
            case 3:{
                cout<<"\n";
                cout<<"<==============Update Value=============>\n";
                int index;
                bool check = false;
                cout<<"\n";
                cout<<"Input index of value to update value = ";cin>>index;
                for(int i=0; i<n; i++){
                    if(index == i){
                        cout<<"\n";
                        cout<<"Please update Value of index["<<i<<"] = ";cin>>array[i];
                        check = true;
                    }
                }
                cout<<"\n";
                if(!check){
                    cout<<"Serch index to update value not found\n";
                }
                break;
            }
            case 4:{
                cout<<"\n";
                cout<<"<==============Delete Value=============>\n";
                int index;
                bool check = false;
                cout<<"\n";
                cout<<"Input index of value to delete value = ";cin>>index;
                for(int i=0; i<n; i++){
                    if(index == i){
                        for(int j=0; j<n-1; j++){
                            array[j] = array[j+1];
                        }
                        n--;
                        check = true;
                    }
                }
                cout<<"\n";
                if(!check){
                    cout<<"Serch index to delete value not found\n";
                }
                break;
            }

            case 5:{
                cout<<"\n";
                cout<<"<================sort Value================>\n";
                cout<<"\n";
                for(int i=0; i<n-1; i++){
                    for(int j=0; j<n-i-1; j++){
                        if(array[j] > array[j+1]){
                            int temp = array[j];
                                array[j] = array[j+1];
                                array[j+1] = temp;
                        }
                    }
                }
                cout<<"Sort value Sucessed\n";
                cout<<"\n";
                break;
            }
            case 6:{
                cout<<"\n";
                cout<<"Exit...................\n";
            }

            default :{
                cout<<"Option not fount\n";
                cout<<"\n";
                break;
            }
        }

    }while(op != 6);

    return 0;
}