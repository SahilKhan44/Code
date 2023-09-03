#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char start = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            // char ch = 'A' + row - 1;
            cout << start << " "; // This is  typecasting where we covert inty tot ch because A convert in int when they e\\xecute
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
}
/*
A
B C
D E F
G H I J
K L M N O
*/