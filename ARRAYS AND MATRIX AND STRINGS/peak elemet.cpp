#include<iostream>
#include<vector>
using namespace std;
int peakindex(vector<int>&arr);
int main(){
	vector <int> vect{1,2,3,4,5};
	int ans;
	ans=peakindex(vect);
	cout<<ans<<endl;
	return 0;
}
int peakindex(vector<int>&arr){
	int max=arr[0];
	int index;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>max){
			index=i;
		}
	}
	return index;
	
	
	
}