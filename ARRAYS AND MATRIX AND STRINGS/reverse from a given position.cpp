#include<iostream>
using namespace std;

int main(){
	int s;
	int n;
	cout<<"enter the value of the n"<<endl;
	cin>>n;
	int temp;
	
	int e;
	
	int arr[n];
	cout<<"enter the vlaue of the array "<<endl;
	for(int i=0;i<n;i++){
		cout<<"enetr the value "<<endl;
		cin>>arr[i];
	}
	cout<<"enter the vlaue where you want to start reversing the array"<<endl;
	cin>>s;
	e=n-1;
	while(s<=e){
		temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
		
	}
	
	for(int k=0;k<n;k++){
		cout<<arr[k]<<endl;
	}
	return 0;
	
}