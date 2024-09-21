// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[5] = {5, 4, -1, 7, 8};
//     int sum = 0;
//     int maxi = arr[0];
//     int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array dynamically

//     for(int i = 0; i < n; i++) { // Loop should run from 0 to n-1
//         sum += arr[i];
//         maxi = max(maxi, sum);
//         if(sum < 0) {
//             sum = 0;
//         }
//     }

//     cout << "The maximum subarray sum is " << maxi << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,6,-1,2};
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i;j<5;j++){
            sum=sum+arr[j];
            if(sum>max)
            max=sum;

        }
    }
    cout<<"the maximum subarray sum is"<<"max"<<max<<endl;

}