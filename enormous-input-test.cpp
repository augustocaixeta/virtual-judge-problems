#include <iostream>

using namespace std;

int main() {
    unsigned long long n, k, t, c;
    cin >> n >> k;

    while (n--) {
        cin >> t;

        if (t % k == 0) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
