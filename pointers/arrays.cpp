#include <iostream>
using namespace std;

int main(){
    int a[5] = {10,2,3,4,5}, *p;
    // a = p;
    cout<<"a: "<<a[2]<<endl<<"p: "<<p<<endl;
    for(int sum = a[0], i=1; i<=5; i++){
        cout<<sum<<endl;
        sum += a[i];
    }
    
    cout<<"sum: "<<endl;
    for(int sum = *a, i=1; i<5; i++){
        cout<<sum<<endl;
        sum += *(a+i);        
    }

    int *q = a+1;

    cout<<"a value: "<<*q<<endl;
    q++;
    cout<<*q<<endl;
    // a++ //gives an compilation error because a is a pointer annotation.

    for(int sum=*a, *p=a+1; p<a+5; p++){
        sum +=*p;
        cout<<"sum: "<<sum<<endl;
    }

    // cout<<"Output: ";
    // int b[20], *c = b;
    // delete [] c;
    // int n = 10, *k = &n;
    // delete k;
    return 0;
}