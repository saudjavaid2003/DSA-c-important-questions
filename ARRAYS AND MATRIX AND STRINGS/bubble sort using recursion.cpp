#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void sort(int arr[],int n);
int main(){
	int n;
	cout<<"enetr the vlaue of the n"<<endl;
	cin>>n;
	int arr[n];
	cout<<"emeytr the value of the arrays"<<endl;
	for(int i=0;i<n;i++){
		cout<<"neter the value "<<endl;
		cin>>arr[i];
	}
	sort(arr,n);
	for(int j=0;j<n;j++)
	cout<<arr[j];
}
void sort(int arr[],int n){
	if(n==0||n==1)
	{
//		cout<<"a;ready sorted"<<endl;
		return;
	}
	for(int i=0;i<n;i++){
	if(arr[i]>arr[i+1]){
	swap(arr[i],arr[i+1]);
	}
	}
	sort(arr,n--);	
	
	
}
