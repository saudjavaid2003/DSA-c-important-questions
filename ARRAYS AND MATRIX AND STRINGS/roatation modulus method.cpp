#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> temp;
	vector<int> arr={1,2,3,4,5};

	
	int k;
	cout<<"enter the psotiojn to shift the elements of the array"<<endl;
	cin>>k;
	int n;
	n=arr.size();
	for(int i=0;i<arr.size();i++)
	temp[(i+k)%n]=arr[i];
	
	arr=temp;
	cout<<"the shifted array is "<<endl;
	for(int i=0;i<arr.size();i++)
	cout<<arr[i];
	return 0;
	
}