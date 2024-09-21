#include<iostream>
using namespace std;
void get(int*x);
void dbl(int*);
int main(){
	int num;
	cout<<"the number given by the users"<<endl;
	get(&num);
	dbl(&num);
	cout<<"its double is"<<num<<endl;
	
}
void get(int*x){
	cout<<"enter the v;aue of the x"<<endl;
	cin>>*x;
	
	
}
void dbl(int*y){
	*y=*y*2;
//	cout<<*y<<endl;
}