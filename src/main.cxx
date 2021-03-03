#include <iostream>

int main(int argc , char** argv){
    if(argc != 2){
        std::cout<<"Argomento richiesto: Nome"<<std::endl;
        return -1;
    }
    std::cout <<"Hello, world! "<< argv[1] <<std::endl;
    return 0;
}