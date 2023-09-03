#include <iostream>
using namespace std;

void printSum(int matrix[3][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < col; col++)
        {
            sum += matrix[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
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
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    printSum(matrix, 3, 4);
}