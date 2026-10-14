#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> arr1={1,2,4};
    std::vector<int> arr2={1,3,4};

    std::vector<int> merged(arr1.size()+arr2.size());

    std::merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),merged.begin());

    for(int x : merged) std::cout << x << ' ';
    std::cout << '\n';






    return 0;
}