#include <stdio.h>
#include <set>
using namespace std;
int main()
{
    set<int> st;
    st.insert(8);
    st.insert(5);
    st.insert(4);
    st.insert(9);
    for (set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        printf("%d", *it);
    }
    return 0;
}