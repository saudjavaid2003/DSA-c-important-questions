#include<iostream>
#include<vector>
using namespace std;
int pivotindex(vector<int>&arr){
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
	}
	int lsum=0;
	int rsum=sum;
	for(int i=0;i<arr.size();i++){
		rsum-=arr[i];
	
	if(lsum==rsum){
		return i;
	}
	lsum+=arr[i];
	}
	return -1;
	
}
int main(){
	int n;
	cout<<"enter the vlaue of the n"<<endl;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		cout<<"enter the value of the array"<<endl;
	cin>>arr[i];
	}
	int pi=pivotindex(arr);
	cout<<pi;
	return 0;
}