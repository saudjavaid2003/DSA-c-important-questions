#include<iostream>
using namespace std;
void functioncall(int arr[],int n,int key);
 void firstoccur(int arr[],int n,int key);
 void lastoccur(int arr[],int n,int key);
int main(){
	int n;
	cout<<"enter the vlaue of the size of the array"<<endl;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cout<<"enter the value of the arrays"<<endl;
		cin>>array[i];
	}
	int search;
	cout<<"enetr the key"<<endl;
	cin>>search;
	int value;
	functioncall(array,n,search);

	
}
void firstoccur(int arr[],int n,int key){
	int ans;
	int start=0;
	int end=n-1;
	int mid=start+end/2;
	while(start<end){
		if(key==arr[mid]){
			int ans=mid;
			end=mid-1;
			
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else
		end=mid-1;
		
	}
	cout<<ans;
}
void lastoccur(int arr[],int n,int key){
	int ans;
	int start=0;
	int end=n-1;
	int mid=start+end/2;
	while(start<end){
		if(key==arr[mid]){
			int ans=mid;
			start=mid+1;
	
			
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else
		end=mid-1;
		
	}
	cout<<ans;
}
void functioncall(int arr[],int n,int key){
	int l1;
	int l2;
	lastoccur( arr, n,key);
	firstoccur( arr,n, key);
	cout<<l1<<l2;
	
}