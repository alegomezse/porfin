#include <iostream>
#include <cstdlib>
int main(int argc,char **argv){
    int a = std::atoi(argv[1]);
    int b = a*2;
    std::cout<<"porfin lo lograste de verdad verdad \n"<<std::endl;
    std::cout<<"numero: "<< b << std::endl;
    return b;

}
