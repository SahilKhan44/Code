#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> reverse(vector<int> vt)
{
    int start = 0, end = vt.size() - 1;
    while (start <= end)
    {
        swap(vt[start], vt[end]);
        start++;
        end--;
    }
    return vt;
}
void printArry(vector<int> vt)
{
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vt;
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);

    vector<int> ans = reverse(vt);
    printArry(ans);
}