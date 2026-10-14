#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int arr[5]={1,4,-9,8,7};
    int n=5;
    int currSum=0;
    int maxSum=0;

    for (int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}