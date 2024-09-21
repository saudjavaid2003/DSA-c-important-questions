#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
	bool remainingpart;
	if(size==0||size==1)
	return true;
	if(arr[0]>arr[1])
	return false;
	else{
		remainingpart=issorted(arr+1,size--);
		return remainingpart;
	}
	
}
int main(){
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bool ans =issorted(arr,n);
	cout<<ans<<endl;
	
	
}