#include<iostream>
using namespace std;
int main(){
	int arr[9]={1,8,6,2,5,4,8,3,7};
	int area;
	int max=0;
	for(int i=0;i<7;i++){
		int width=1;
		for(int j=i+1;j<=8;j++){
			if(arr[i]<arr[j]){
			area=width*arr[i];
			width++;
			}
			else{
				area=width*arr[j];
				width++;
			}
			if(area>max)
			max=area;
			
			
			
		}
	}
	cout<<max<<endl;
	
}