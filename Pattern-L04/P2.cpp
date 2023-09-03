#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 1;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}
// this is for coounting Print