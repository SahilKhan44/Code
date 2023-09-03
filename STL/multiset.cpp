#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);
    // this is for print elements
    // for (auto it = ms.begin(); it != ms.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    /// this is for all clear
    // ms.clear();

    // ms.erase(2);

    cout << ms.count(2);
}
//     for (auto it = ms.begin(); it != ms.end(); it++)
//     {
//         cout << *it << " ";
//     }
// }