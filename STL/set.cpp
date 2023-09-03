#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(2);
    st.insert(2);

    // for (auto it : st)
    // {
    //     cout << it << endl;
    // }

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
}