#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,1,2,3,2};
	int count=0;
	for(int i=0;i<5;i++){
		int j=0;
		while(j<5){
			if(arr[i]==arr[j]){
				count++;
				j++;
			}
		}
			cout<<arr[i]<<count<<endl;
	}
	return 0;
	
}