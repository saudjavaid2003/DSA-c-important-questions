#include<iostream>
#include<vector>
using namespace std;
int main(){
	int temp;
	
	vector<int> v;
	int arr[5]={1,2,2,0,0};
	int array[2]={6,9};
	for(int i=0;i<5;i++){
		v.push_back(arr[i]);
		
	}
	for(int j=0;j<2;j++){
		v.push_back(array[j]);
	}
	for(int k=0;k<v.size();k++)
	cout<<v[k]<<endl;
	cout<<"the size of the vector is"<<endl;
	
	int size=v.size();
	cout<<size<<endl;
	
	arr[size];
	for(int i=0;i<size;i++){
		arr[i]=v[i];
	}
	cout<<"the new form of arr"<<endl;
	
	for(int q=0;q<size;q++)
	cout<<arr[q];
		for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
		
	}
	cout<<"the sorted array is now"<<endl;
	for(int s=0;s<size;s++){
		cout<<arr[s]<<endl;
		
	}
	// dekh soday yahan per tonay logic bana ker chala
//	 to liya hai lekin leetcode per loray lagnay hain akhir kioun?
// kara li na  bhesti ab ah jah pyara code likhain

	
	return 0;
	
}