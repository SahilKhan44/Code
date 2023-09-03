// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + ((end - start) / 2);

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + ((end - start) / 2);
//     }
//     return -1;
// }

// int main()
// {
//     int evenArray[8] = {2, 4, 6, 8, 10, 12, 14, 16};
//     // int oddArray[5] = {1, 2, 3, 4, 5};

//     int index1 = binarySearch(evenArray, 8, 16);
//     cout << "Your key is on index" << index1 << endl;
//     // int index2 = binarySearch(oddArray, 8, 16);
//     // cout << "Your key is on index" << index2;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "bca";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}