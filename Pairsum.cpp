#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> pairSum(vector <int> nums, int target){
    vector <int> ans;
    int n = nums.size();
    int i =0;
    int j=n-1;

    while(i<j){
        int ps=nums[i]+nums[j];
        if(ps>target){
            j--;
        }else if (ps<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {};
}

int main(){
    vector <int> nums ={1,2,3,4,5,10,19,17,6};
    int target=16;
    vector<int> ans=pairSum(nums,target);

    if (!ans.empty()){
        cout << ans[0] << ", "<< ans[1] << endl;
    }else{
        cout << "No Pair found that sum to "<<target<<endl;
    }
    return 0;
}

