#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string title;

        cin.ignore();
        getline(cin, title);
        transform(title.begin(), title.end(), title.begin(), ::toupper);

        int m, n, b;
        cin >> m >> n >> b;

        map<string, int> costs;
        map<string, int> requirements;
        vector<pair<int, string>> recipes;

        while (m--) {
            string name;
            int c;

            cin >> name >> c;
            costs[name] = c;
        }

        while (n--) {
            string recipe;
            int sum = 0;

            cin.ignore();
            getline(cin, recipe);

            int k;
            cin >> k;

            while (k--) {
                string name;
                int amount;
                cin >> name >> amount;
                sum += amount * costs[name];
            }

            if (sum <= b) {
                recipes.push_back({sum, recipe});
            }
        }

        sort(recipes.begin(), recipes.end());

        cout << title << endl;

        if (recipes.empty()) {
            cout << "Too expensive!" << endl;
        } else {
            for (auto r : recipes) {
                cout << r.second << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
