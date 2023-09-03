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
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " "; // This is  typecasting where we covert inty tot ch because A convert in int when they e\\xecute
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
A B C
B C D
C D E
*/