#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int maxLen = 1, curLen = 1;
        int maxStart = 0;

        // Find the first character of the longest repeated substring
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curLen++;
            } else {
                curLen = 1;
            }

            if (curLen > maxLen) {
                maxLen = curLen;
                maxStart = i - curLen + 1;
            }
        }

        char insertChar;

        if (maxLen >= 2) {
            // Generate a different lowercase letter from the repeated character
            char c = s[maxStart];
            insertChar = 'a' + ((c - 'a' + 1) % 26);
            // Insert between the first two repeated characters
            s.insert(s.begin() + maxStart + 1, insertChar);
        } else {
            // No repeated substring, insert at start
            char c = s[0];
            insertChar = (c == 'a') ? 'b' : 'a';
            s.insert(s.begin(), insertChar);
        }

        cout << s << endl;
    }
    return 0;
}
