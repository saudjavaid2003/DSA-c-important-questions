#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,7,3,6,5,6};
	int ans;
	int sum1=0;
	int sum2=0;
	int i;
	for( i=1;i<4;i++){
		for(int j=i;j>0;j--){
			sum1=sum1+arr[j-1];
		}
		for(int k=i;k<5;k++){
			sum2=sum2+arr[k+1];
		}
		if(sum1==sum2){
		ans=i;
		break;	
		}
	}
	cout<<ans<<endl;
	return 0;
	
}