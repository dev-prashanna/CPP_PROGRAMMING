#include <iostream>

int search(int arr[],int size, int target){
    
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            return i;
        }else{
            return -1;
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=5;
    int target=3;
    std::cout<<search(arr,size,target)<<std::endl;
    return 0;
}