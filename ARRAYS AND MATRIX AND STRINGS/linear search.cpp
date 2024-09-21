#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int ser;
	cout<<"enter tje vlaue of search"<<endl;
	cin>>ser;
	int key=-1;
	cout<<"enter the vlaue of the array"<<endl;
	for(int i=0;i<5;i++){
		cout<<"enter the values of the array"<<endl;
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		if(ser==arr[i]){
			key=i;
		}
		
	}
	cout<<"key"<<key<<endl;
	
}