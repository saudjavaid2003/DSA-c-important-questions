// use binary search and monotonic function approach
// yar love bhbbar ki video dekh lain bhen cho
#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int start=0;
    int end =6;
    int mid =start+end/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;

        }
        else
        end=mid;
        mid=start+end/2;

    }
    cout<<"the minmum number is "<<end<<endl;
    

}