#include<iostream>
using namespace std;
int main(){
	int arr[9]={1, 2, 7, -4, 3, 2, -10, 9, 1};
	int sum=0;
	int maxi=0;
	for(int i=0;i<9;i++){
		sum=0;
		for(int j=i;j<9;j++){
			
		sum=sum+arr[j];
		if(sum>maxi)
		maxi=sum;
		}
	}
	cout<<maxi<<endl;
	return 0;
	
	}
	// aslo can be done by kadanes algo of o(n) time coplexity