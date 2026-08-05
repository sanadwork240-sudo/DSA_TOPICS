#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    string st;

    for (char digit : num) {

        while (!st.empty() && k > 0 && st.back() > digit) {
            st.pop_back();
            k--;
        }

        st.push_back(digit);
    }

    // Remove remaining digits from the end
    while (k > 0 && !st.empty()) {
        st.pop_back();
        k--;
    }

    // Remove leading zeros
    int i = 0;
    while (i < st.size() && st[i] == '0')
        i++;

    string ans = st.substr(i);

    return ans.empty() ? "0" : ans;
}

int main() {
    cout << removeKdigits("1432219", 3) << endl;   // 1219
    cout << removeKdigits("10200", 1) << endl;     // 200
    cout << removeKdigits("10", 2) << endl;        // 0
}