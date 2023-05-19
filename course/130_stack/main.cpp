#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(2);
    st.push(3); // push create copy & paste in stack
    st.emplace(4); // straightaway paste in stack

    cout << st.size() << endl; // 3
    cout << st.empty() << endl; // 0

    cout << st.top() << endl; // show last element // 4

    st.pop(); // retrieves the last element
    cout << st.size() << endl; // 2

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    st.emplace(1);
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);

    auto a = st._Get_container();
    cout << a[2] << endl;

    stack<int, list<int>> st2;

    st2.emplace(1);
    st2.emplace(2);
    st2.emplace(3);
    st2.emplace(4);

    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;

    return 0;
}