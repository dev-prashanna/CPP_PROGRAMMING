#include <iostream>

int binToDecimal(int binNum){
    int ans=0, pow=1;

    while(binNum>0){
        int rem=binNum%10;
        ans+=rem*pow;
        binNum=binNum/10;
        pow=pow*2;
    }
    return ans;
}

int main(){
    int binNum=100110;
    std::cout<<"Binary Number: "<<binNum<<std::endl;
    std::cout<<"Decimal Number: "<<binToDecimal(binNum)<<std::endl;
}