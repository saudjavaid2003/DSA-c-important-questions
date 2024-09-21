#include<iostream>
using namespace std;
int main(){
	int mid;
	int start;
	int end;
	int arr[5]={1,2,3,4,5};
	start=0;
	int loc=-1;
	
	end=4;
	mid=start+end/2;
	int key;
	cout<<"key"<<endl;
	cin>>key;
	while(start>end){
		if(key==arr[mid]){
			
		loc=mid;
		cout<<"the index is"<<loc;
		}
		else if(key<arr[mid])
		end=end-1;
		else
		start=start+1;
		
	}
}