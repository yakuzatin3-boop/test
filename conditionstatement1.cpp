#include<iostream>
using namespace std;

int main(){

    string name;
    float price;
    int dis, qty;
    double total_price, payment;

    cout<<"\n";
    cout<<"Input Name of product  = ";cin>>name;
    cout<<"Input Quantity         = ";cin>>qty;
    cout<<"Input Price of product = $";cin>>price;

    total_price = qty * price;

    if(total_price >= 1 && total_price <= 10){
        dis = 10;
    }else if(total_price >= 10 && total_price <= 20){
        dis = 20;
    }else if(total_price >= 20 && total_price <= 30){
        dis = 30;
    }else if(total_price >= 30 && total_price <= 40){
        dis = 40;
    }else{
        dis = 50;
    }

    payment = total_price - (total_price*dis) / 100; 

    switch(dis){
        case 10:{
            cout<<"I have discount for you 10%\n";
            break;
        }
        case 20:{
            cout<<"I have discount for you 20%\n";
            break;
        }
        case 30:{
            cout<<"I have discount for you 30%\n";
            break;
        }case 40:{
            cout<<"I have discount for you 40%\n";
            break;
        }
        case 50:{
            cout<<"I have discount for you 50%\n";
            break;
        }
        default:{
            cout<<"We have only discount for you 10% -> 50%\n";
            break;
        }
    }

    float price_reil = price * 4000;
    double payment_reil = payment * 4000;

    cout<<"\n";
    cout<<"<+===============Receipt==================+>\n";
    
    cout<<"Name              = "<<name<<endl;
    cout<<"Quantiy of "<<name<<" = "<<qty<<endl;
    cout<<"Price of "<<name<<" = "<<price<<"$"<<" | "<<price_reil<<" reil\n";
    cout<<"Total Price         = "<<total_price<<" $ | "<<total_price * 4000<<" reil\n";
    cout<<"Payment             = "<<payment<<" $ | "<<payment_reil<<" reil\n";

    return 0;
}