#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
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

    int arr[10] = {10, 21, 0, 122, 0, 1, 0, 1, 56, 0};
    swapAlternate(arr, 10);
    printArray(arr, 10);
}