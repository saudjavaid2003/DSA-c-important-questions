#include<iostream>
using namespace std;
int main(){
	int arr[100]={1,2,3,4,5,6,7,8,9,10};
	int index;
	cout<<"enter the vlaue of the index"<<endl;
	cin>>index;
	
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
		
			}
			size--;
			for(int j=0;j<size;j++)
			cout<<arr[j]<<endl;
			return 0;
			
}