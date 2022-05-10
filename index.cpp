// #include <sctdlib>
#include <iostream>
using namespace std;

int main(){
    int a =1;
    int b = a++;
    b =8034;
    std::cout<<(b >> 3)<<endl<<a<<endl;
    return 0;
    // return EXIT_SUCCESS
}