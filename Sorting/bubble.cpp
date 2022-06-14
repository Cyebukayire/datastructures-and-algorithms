/**
 * @file bubble.cpp
 * @author Peace Cyebukayire
 * @brief
 * @version 0.1
 * @date 2022-06-14
 *
 * @copyright Copyright (c) 2022
 *
 * @details
 * Bubble sort needs 2 loops
 * ...One for looping n times
 * ...Second one for swapping consecutive numbers n times
 */

#include <iostream>
using namespace std;
void printArr(int arrSize, int arr[])
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubbleSort(int arrSize, int arr[])
{
    int temp;
    for (int i = 0; i < arrSize; i++)
    {
        cout << endl
             << "After Loop " << i << ":" << endl;
        for (int j = 0; j < (arrSize - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printArr(arrSize, arr);
    }
}
int main()
{
    int arr[] = {23, 34, 2, 56, 0, 4, 1, 9, 81, 7, 3};
    int arrSize = *(&arr + 1) - arr;
    // cout << arrSize << endl;
    cout << endl
         << "BEFORE: " << endl
         << endl;
    printArr(arrSize, arr);

    cout << endl
         << endl
         << "AFTER:" << endl
         << endl;
    bubbleSort(arrSize, arr);
    return 0;
}