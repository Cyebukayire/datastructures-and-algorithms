#include <iostream>
using namespace std;
void printArr(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

void sortSelection(int arrSize, int arr[6])
{
    int temp;

    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArr(6, arr);
}
int main()
{
    int arr[6] = {4, 6, 1, 0, 3, 7};
    cout << endl
         << "BEFORE SORTING: " << endl;
    printArr(6, arr);
    cout << endl
         << endl
         << "AFTER SORTING: " << endl;
    sortSelection(6, arr);
    return 0;
}