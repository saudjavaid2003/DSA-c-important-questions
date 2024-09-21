#include<iostream>
#include<conio.h>
using namespace std;
float show(int n);
int main(){
	int den;
	cout<<"enter the value of den"<<endl;
	cin>>den;
	int value;
	value = show(den);
	cout<<value<<endl;
	
	
}
float sow(int n){
	int sum=1;
	int product=1;
	for(int i=1;i<=n;i++){
		product =product*i;
		sum = sum+1.0/product;
		
	}
	return sum;
	
}