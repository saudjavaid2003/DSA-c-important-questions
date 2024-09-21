#include<iostream>
using namespace std;
int main(){
	int k;
	int size=6;
	int arr[size]={1,2,2,3,3,4};
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				size--;
				k=j;
				while(k<6){
				arr[k]=arr[k+1];
					k++;
				}
			}
		}
	}
	for(int k=0;k<size;k++)
	cout<<arr[k]<<endl;
	
}