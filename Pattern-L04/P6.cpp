#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 2;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count - row << " "; // we can use col
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
1
1 2
2 3 4
4 5 6 7
7 8 9 10 11
*/