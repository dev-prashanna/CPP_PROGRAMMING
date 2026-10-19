#include <iostream>
using namespace std;

int BS(int* arr, int tar, int st, int end){
       int mid=st+(end-st)/2;
       if(tar>arr[mid]){
              return BS(arr,tar,mid+1,end);
       }else if(tar<arr[mid]){
              return BS(arr,tar,st,mid-1);
       }else{
              return mid;
       }
}

int main() {
      int arr[]={1,2,4,7,10,12};
      int tar=12;
      
      cout<<BS(arr,tar)

    
}
