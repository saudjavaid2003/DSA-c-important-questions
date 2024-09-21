#include<iostream>
using namespace std;
int main(){
	int n;
	int temp;
	int arr[5];
	cout<<"enter the value of the n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the value of the array"<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
	
			}
		}
	}
	cout<<"the sorted array is"<<endl;
	for(int k=0;k<5;k++){
		cout<<arr[k]<<endl;
	}
	return 0;
}