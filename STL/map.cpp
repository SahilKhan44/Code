// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     string reversedStr;
//     for (int i = str.length() - 1; i >= 0; i--)
//     {
//         reversedStr += str[i];
//     }

//     cout << "Reversed string: " << reversedStr << endl;

//     return 0;
// }

#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> mpp;

    mpp["raj"] = 21;
    mpp["rj"] = 31;
    mpp["jar"] = 211;

    auto it = mpp.find("simran");

    if (it != mpp.end())
    {
        cout << it->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
}
