#include<iostream>
using namespace std;
int nmz(int a,int&b){
	int y=90;
	while(a<b){
		y=y++ + ++a + ++a + --a;
		a++;
		return y;
	}
	
}
int main(){
	int a=4;
	int b=10;
	cout<<nmz(a,b);
	cout<<a;
}