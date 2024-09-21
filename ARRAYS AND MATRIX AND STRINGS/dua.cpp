#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int first=0;
	int second=0;
	for(int i=0;i<5;i++){
		cout<<"enter the values "<<endl;
		cin>>arr[i];
	}
	first=arr[0];
	
	for(int i=0;i<5;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second)
		second=arr[i];
		
	}
	cout<<"second largest is"<<second<<endl;
	
}