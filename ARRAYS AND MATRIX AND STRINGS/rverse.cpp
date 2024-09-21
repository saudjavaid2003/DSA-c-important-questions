#include<iostream>
using namespace std;
void reverse(int n);
int main(){
	int number;
	cout<<"enter the value of the number"<<endl;
	cin>>number;
	cout<<"value before reversing it "<<number<<endl;
	reverse(number);
}
void reverse(int n){
	int t=n;
	int r=0;
	
	for(t=n;t!=0;t=t/10){
		r=r*10 +t%10;
		
	}
	cout<<r<<endl;
}
