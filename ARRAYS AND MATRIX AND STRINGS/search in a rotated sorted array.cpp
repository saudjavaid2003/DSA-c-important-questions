#include<iostream>
using namespace std;
int main(){
	int n=6;
	int arr[n]={7,8,9,1,2,3};
	int s=0;
	int e=n-1;
	int mid =(s+e)/2;
	while(s>=e){
		if(arr[mid]>=arr[0])
		s=mid+1;
		else
		e=mid;
		
		mid=(s+e)/2;
		
	}
	cout<<s<<endl;
	
}
