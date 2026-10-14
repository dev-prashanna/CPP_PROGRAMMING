#include <iostream>
#include <algorithm>

using namespace std;
int rotate_sort_array(int* arr, int target,int st, int end){
    int mid=st +(end-st)/2;
    if (target<arr[mid]){
        end=mid-1;
    }else if(target >arr[mid]){
        st=mid+1;
    }else{
        return mid;
    }
    return -1;

}

int main() {
    int arr[]={7,8,9,0,3,5,4};
    int target=5;
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<rotate_sort_array(arr,target,0,n-1);

    
    return 0;
}