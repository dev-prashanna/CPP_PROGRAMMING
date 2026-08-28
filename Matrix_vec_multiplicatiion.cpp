#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<vector<int>>A={
        {1,2,3},
        {4,5,6}
         
    };

    vector<int>B={10,20,30};

    for(int i=0;i<A.size();i++){
        int sum=0;

        for(int j=0;j<B.size();j++){
            sum+=A[i][j]*B[j];
        }
        cout<<sum<<endl;

    }

    return 0;


}