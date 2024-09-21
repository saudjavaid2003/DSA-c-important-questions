#include<iostream>
using namespace std;
int main(){
	int size=8;
	int arr[size]={0,1,2,2,3,0,4,2};
	int target;
	cout<<"enter the target"<<endl;
	cin>>target;
	for(int i=0;i<8;i++){
		if(arr[i]==target){
			size--;
			for(int j=i;j<=7;j++)
			arr[j]=arr[j+1];
			
		}
		
	}
	for(int k=0;k<size;k++){
		cout<<arr[k];
	}
}