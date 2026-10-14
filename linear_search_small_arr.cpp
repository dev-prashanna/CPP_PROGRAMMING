#include <iostream>
#include <iterator>
#include <algorithm>

int getidx(const int arr[], int size, int target){
    const int* it=std::find(arr,arr+size,target);
    if (it != arr + size) {
        return std::distance(arr, it); // Calculate index distance
    }
    return -1;
}

int main(){
    int nums[]={5,-15,22,33,1,-1,6};
    std::size_t length=std::size(nums);
    int indx=0;
    int smallest=__INT_MAX__;
    for (int i=0;i<length;i++){
        if(nums[i]<smallest){
            smallest=nums[i];

        }
        
    }
    std::cout <<smallest<<std::endl;
    std::cout<<getidx(nums,length,smallest)<<std::endl;
    return 0;
}