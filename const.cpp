#include <iostream>
class Car{
    public:
    std::string brand;
    int year;

    Car(){
        brand="ford";
        year=2020;

    }
};

int main(){
    Car mycar;

    std::cout<<mycar.brand<<std::endl;
    std::cout<<mycar.year<<std::endl;
    

    return 0;
}