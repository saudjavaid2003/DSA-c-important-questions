
#include<iostream>
using namespace std;
int main(){
	int temp;
	int pos;
	int dir;
	int arr[5]={1,2,3,4,5};
	cout<<"enter the psotion to shift"<<endl;
	cin>>pos;
	cout<<"enter the direction to roatte"<<endl;
	cin>>dir;
	while(pos){
		if(dir==1){
			temp=arr[0];
			for(int i=0;i<4;i++)
				arr[i]=arr[i+1];
				arr[4]=temp;
				
			
		}
		else{
			
		temp=arr[4];
		for(int i=4;i>0;i++)
		arr[i]=arr[i-1];
		arr[0]=temp;
		}
		pos--;
	}
	for(int i=0;i<5;i++)
	cout<<arr[i]<<endl;
	return 0;}
//	cout<<"arr2"<<endl;
//int arr2[5];
//for(int j=0;i<5;i++)
//cout<<arr2[j]<<endl;
//return 0;

