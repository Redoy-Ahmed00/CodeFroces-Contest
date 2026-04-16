#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int maxLen = 0, currLen = 0;
    int startIndex = -1, tempStart = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (currLen == 0)
                tempStart = i;   // start of a new sequence
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                startIndex = tempStart;
            }
            currLen = 0;
        }
    }

    // Check if the string ends with 1s
    if (currLen > maxLen) {
        maxLen = currLen;
        startIndex = tempStart;
    }

    int immediateZeroIndex = -1;
    if (startIndex != -1 && startIndex + maxLen < n)
        immediateZeroIndex = startIndex + maxLen;

    cout << "First 1 index: " << startIndex << endl;
    cout << "Immediate 0 index: " << immediateZeroIndex << endl;

    return 0;
}