#include<iostream>
#include<math.>
using namespace std;
int main(){
	int number;
	cout<<"enter the number "<<endl;
	cin>>number;
	int weight;
	int sum=0;
	int r;
	for(weight=0;number!=0;number=number/10){
		r=number%10;
		sum=sum+2*pow(r,weight);
	}
	cout<<"sum is "<<sum;
}