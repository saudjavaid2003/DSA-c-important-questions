#include<iostream>
using namespace std;
int show(int);
int main(){
	int x;
	int num;
	for(int i=0;i<10;i++){
		cout<<"enter the number "<<endl;
		cin>>num;
		if(show(x)==1){
			cout<<"your entered numbver is even"<<endl;}
			else if(show(x)==0)
			cout<<"the number is odd"<<endl;
	}
}
int show(int){
	if(n%2==0)
	return 1;
	else if(n%2!=0)
	return 0;
}
