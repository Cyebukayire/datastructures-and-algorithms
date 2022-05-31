#include <iostream>
#define name "Peace"

using namespace std;

int func(const int num){
    // num = 90;
    return num;
}
int main(){
    // char name[3] = 'P';
    const int num = 23;
    string fname = "Kaliza"; // Strings preffer double quoatations
    const char cars[]= "Ferrari"; //char with string prefers double quoatation
    const char letter[]={'A', 'B', 'C'};//char prefers single quotations
    const char str1[] = "str1";
    cout<<name<<fname<<endl;
    cout<<cars;
    cout<<endl<<func(23)<<endl;
    return 0;
}
