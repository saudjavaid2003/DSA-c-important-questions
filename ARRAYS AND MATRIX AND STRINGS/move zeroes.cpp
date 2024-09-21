// move zeroes problem is at leetcode
#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,0,5,8,0};
	int temp;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]==0){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			else
			break;
			
		}
	}
	cout<<"the new array is"<<endl;
	for(int k=0;k<5;k++){
		cout<<arr[k];
		
	}
}