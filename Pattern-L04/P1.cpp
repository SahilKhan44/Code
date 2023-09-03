#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your Number ";
    cin >> n;

    // With using for loop
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n; j++)
    //      {
    //          cout << j << " ";
    //      }
    //      cout << endl;
    //  }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            
            //for simple print  
            // cout << j << " ";

            // for reverse print
           // cout << n - j + 1 << " ";

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}