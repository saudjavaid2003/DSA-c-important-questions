#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];

	cout<<"enter the vlaue of the n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the vlaues "<<endl;
		cin>>arr[i];
	}
	int k;
	cout<<"enter the vlaue of the k"<<endl;
	cin>>k;
	int temp;
	int lastindex=n-1;
	int min;
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
	for(int i=0;i<n;i++)
	cout<<arr[i];
	cout<<"kth largest"<<"  "<<arr[k-1]<<endl;;
	cout<<"kth smallest"<<arr[lastindex-k+1];
	

}