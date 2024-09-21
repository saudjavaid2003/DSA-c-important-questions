#include<iostream>
using namespace std;
int main(){
    int count;
    int n;
    int array[n];
    cout<<"enter the vlaue of n"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"enter the vlaue in the array"<<endl;
        cin>>array[i];
    }
    for(int i=1;i<n;i++){
        if(array[i-1]>array[i])
        count++;
    }
    if(array[n-1]>array[0])
    count++;
    if(count<=1)
    cout<<"true"<<endl;
    else
    cout<<"flase"<<endl;

}