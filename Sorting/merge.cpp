#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef vector<int> vi;

int main() {
    vi arr1 = {2, 5, 10};
    vi arr2 = {4,7,10};
    vi merge_arr(6);

    int k=0, i=0, j=0;
    while (i<arr1.size() && j < arr2.size()) {
        if(arr1[i] < arr2[j]){
            merge_arr[k] = arr1[i];
        }
    }
}