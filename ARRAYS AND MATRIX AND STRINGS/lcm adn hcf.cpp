#include<iostream>
using namespace std;
int gcd(int a,int b);
int lcm(int a,int b);
int main(){
	int x;
	int y;
	cout<<"enter the value of the numbers"<<endl;
	cin>>x;
	cin>>y;
	int hcf;
hcf=gcd(x,y);
cout<<hcf<<"the gcd is"<<endl;
int leastcommonfactor;
leastcommonfactor =lcm(x,y);
cout<<"the lcm is"<<leastcommonfactor<<endl;

	
	
}
int gcd(int a,int b){
	int n;
	int g;
	if(a>b)
	n=a;
	else
	n=b;
	for(int i=0;i<n;i++){
		if(a%i==0&&b%i==0){
			g=i;
		}
		return g;
	}
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}