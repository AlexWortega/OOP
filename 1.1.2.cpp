#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n;
    int sum = 0;
    cin >> n;
    if (n > 0 && n - trunc(n) == 0) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "Sum_n = " << sum;
    } else {
        cout << "n is wrong " << n;
    }
    return 0;
}
