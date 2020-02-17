#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 0 && n < 10) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    } else {
        cout << "N is wrong: " << n;
    }
    return 0;
}
