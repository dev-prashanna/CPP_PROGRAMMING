#include <iostream>
using namespace std;

int main(){
    
    int matrix[4][5]={
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int rows=4;
    int cols=5;

    int total=0;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0||i==rows-1||j==0||j==cols-1){
                total+=matrix[i][j];
            }
        }
    }

    cout <<"Boundary sum:"<<total<<endl;


    return 0;
}