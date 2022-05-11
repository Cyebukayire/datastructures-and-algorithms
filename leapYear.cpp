#include <iostream>
using namespace std;

void isLeapyr(int year){
    cout<<endl<<year<<" is a leap year!"<<endl; 
}
void notLeapyr(int year){
    cout<<endl<<year<<" is not a leap year!"<<endl;
}
void leap(int yr1, int yr2) {
    int arr[2] = {yr1, yr2};
    int year;
    int leapArr[2]={};
        for(int i = 0; i<2; i++){
            leapArr[i] = arr[i];
            year = leapArr[i];
            if(year%4==0){
                if(year%100==0){
                    if(year%400==0){
                        isLeapyr(year);
                        continue;
                    }else{
                        notLeapyr(year);
                        continue;
                    }
                }else{
                    isLeapyr(year);
                    continue;
                }
            }else {
                notLeapyr(year);
                continue;
            }
                     
        }
    }
int main() {
    leap(2022, 2024);
        end:
    return 0;
}