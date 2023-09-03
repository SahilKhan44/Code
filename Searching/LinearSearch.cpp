#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {5, -5, 8, -5, 21};
    cout << "Enter your key" << endl;
    int key;
    cin >> key;
    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is Absent" << endl;
    }
}