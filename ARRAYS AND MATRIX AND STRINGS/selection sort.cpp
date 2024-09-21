#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	int min;
	int temp;
	cout<<"enter the vlaue of the n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ente tjhe vlaue of the arrays"<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
			min=j;
			
		}
		if(min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
			
		}
		
	}
	for(int k=0;k<n;k++){
		cout<<arr[k]<<endl;
	}
return 0;
	
}