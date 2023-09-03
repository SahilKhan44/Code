#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col << " "; // we can use col
            col++;
        }
        cout << endl;
        row++;
    }
}
// This is for half pyramid of counting no.
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5   */