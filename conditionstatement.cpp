#include<iostream>
using namespace std;

int main(){

    int nuse, ouse, total_use;
    double pay;

    cout<<"\n";
    cout<<"Input new Use = ";cin>>nuse;
    cout<<"Input Old Use = ";cin>>ouse;
    cout<<"\n";

    total_use = nuse - ouse;

    if(total_use >= 1 && total_use <=10){
        pay = total_use * 350;
    }else if(total_use > 10 && total_use <=20){
        pay = 10*350 + (total_use - 10) * 450;
    }else if(total_use > 20 && total_use <=30){
        pay = 10*350 + 10*450 + (total_use - 20) * 550; 
    }else if(total_use > 30 && total_use <= 40){
        pay = 10*350 + 10*450 + 10*550 + (total_use - 30)*650;
    }else if(total_use >40 && total_use <=50){
        pay = 10*350 + 10*450 + 10*550 + 10*650 + (total_use - 40)*750;
    }else if(total_use > 50 && total_use <= 60){
        pay = 10*350 + 10*450 + 10*550 + 10*650 + 10*750 + (total_use - 50)*850;
    }else{
        pay = 10*350 + 10*450 + 10*550 + 10* 650 + 10*750 + 10*850 + (total_use - 60)*950;
    }

    double Pay_dollar = pay / 4000;

    cout<<"\n";
    cout<<"============================\n";
    cout<<"New use        = "<<nuse<<" kw/h\n";
    cout<<"Old Use        = "<<ouse<<" kw/h\n";
    cout<<"Total_use      = "<<total_use<<" kw/h \n";
    cout<<"Payment        = "<<pay<<" reil\n";
    cout<<"Payment        = "<<Pay_dollar<<"$";

    return 0;
}