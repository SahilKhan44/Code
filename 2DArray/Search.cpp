#include <iostream>
using namespace std;

bool isPresent(int matrix[3][4], int SearchKey, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (matrix[row][col] == SearchKey)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int matrix[3][4];
    cout << "Input your row or colm  " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> matrix[row][col];
        }
        cout << endl;
    }

    cout << "Output your row or colm  " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << matrix[row][col];
        }
        cout << endl;
    }

    cout << "Enter the key you want to search" << endl;

    int SearchKey;
    cin >> SearchKey;

    if (isPresent(matrix, SearchKey, 3, 4))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
}