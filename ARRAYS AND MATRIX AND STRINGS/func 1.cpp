#include<iostream>
using namespace std;
int power(int a,int b);
int main(){
	int x;
	int y;
	cout<<"enter the vlaue of the first "<<endl;
	cin>>x;
	cout<<"enter the second number"<<endl;
	cin>>y;
	int result;
	result =power(x,y);
	cout<<result<<endl;
}
int power(int a,int b){
	int r=1;
	int c=1;
	while(c<=b)
	{c++;
		r=r*a;
		
	}
	return r;
	
}