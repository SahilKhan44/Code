#include <iostream>
using namespace std;
int Reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    cout << "Enter the size of an array";
    int arr[10] = {542, 2, 5, 1, 5, 1, 4, 1, 4, 4};
    Reverse(arr, 10);
    printArray(arr, 10);
}