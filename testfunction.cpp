#include<iostream>
using namespace std;

double Sum(double *p1, double *p2){
	return *p1 + *p2;
}
int Sum(int *n1 , int *n2){
	return *n1 + *n2;
}
void Sum(int *a, double *x){
	cout<<"sum = "<<*a + *x <<endl;
}
float Sub(float &a, float &b){
	return a - b;
}
int main(){
	
	int x, y;
	cout<<"input x = ";cin>>x;
	cout<<"input y = ";cin>>y;
	
	cout<<"Sum() + 10  = "<<Sum(&x, &y) + 10<<endl;
	
	float *
	return 0;
}
