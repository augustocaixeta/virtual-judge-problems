#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q, cases = 1;

    while (cin >> N >> Q && (N != 0 && Q != 0)) {
        cout << "CASE# " << cases << ":" << endl;

        vector<int> v;

        while (N--) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        while (Q--) {
            int x, pos = -1;
            cin >> x;

            for (int i = 0; i < v.size(); i++) {
                if (v.at(i) == x) {
                    pos = i + 1;
                    break;
                }
            }

            if (pos == -1) {
                cout << x << " not found" << endl;
            } else {
                cout << x << " found at " << pos << endl;
            }
        }

        cases++;
    }

    return 0;
}
