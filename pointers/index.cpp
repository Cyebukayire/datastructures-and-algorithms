#include <iostream>
using namespace std;

int main(){
    int i = 15,j,*p,*q;
    p = &i;// keeping the address of i
    cout<<"P: " << p << endl;
    cout<<"i: " <<i << endl;
    *p = 20; // Assigning value 20 to variable at this address
    cout<<"i: " <<i<<endl;
    cout<<"*p: "<<*p<<endl; // Outputs the value in this address that pointer p holds

    j = 2**p; // 2 times value stored in the address that p holds (*P)
    cout<<"j: "<<j<<endl;

    // delete p; // this can't delete the pointer
    /* use delete p; to end program peacefully and to prevent further leakage*/
    
    // p = 0; // atleast this forces p to point to null when we don't want it to point to any variable anymore
    /*Run p=0 at the end of the program since it stops the program from proceeding*/
    // cout<<"After p=0, p: "<<p<<endl<<"*p: "<<*p<<endl<<"i: "<<i<<endl;
    return 0;
}