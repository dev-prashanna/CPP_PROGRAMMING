#include <iostream>
class Car{
    public:
    std::string band;
    int year;

    Car(std::string b, int y){
        band=b;
        year=y;
    }
};

int main(){
    Car mycar("toyota", 20201);
    std::cout<<mycar.band<<std::endl;
    std::cout<<mycar.year<<std::endl;
    return 0;
}