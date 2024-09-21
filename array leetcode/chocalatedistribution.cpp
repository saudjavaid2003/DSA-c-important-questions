#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cout<<"enter the vlaue of the  students to give them choclate"<<endl;
    cin>>m;
    int arr[8]={1,3,4,7,9,9,12,56};
    int min=INT_MAX;
    sort(arr,arr+8);
    for(int i=0;i+m-1<8;i++){
        int d=arr[i+m-1]-arr[i];
        if(d<min){
            min=d;

        }
    }
    cout<<"min is"<<min<<endl;


}
// in this porblem the elements of the array represents the number of chocaltes 
// in each packet means the first element has 1 chcoalclate while the packet 2 has 3 choclates in it
// so m is the students to whom we have to distribute 
// we have to distriubte in such a way that the studnet with maximum choclates and the student with the minimum choclates there difference is minimum 
// go see gfg 
