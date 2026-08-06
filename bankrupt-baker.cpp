#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    vector<string> binders;
    cin >> t;

    while (t--) {
        string title;

        cin.ignore();
        getline(cin, title);
        binders.push_back(title);

        int m, n, b;
        cin >> m >> n >> b;

        map<string, int> ingredients;
        map<string, int> recipes;
        map<string, int> requirements;

        while (m--) {
            string name;
            int c;

            cin >> name >> c;
            ingredients[name] = c;
        }

        while (n--) {
            string recipe;
            int total;

            cin.ignore();
            getline(cin, title);

            int k;
            cin >> k;

            while (k--) {
                string name;
                int c;
                cin >> name >> c;
                requirements[name] = c;
                total += c;
            }

            recipes[recipe] = total;
        }
    }

    return 0;
}
