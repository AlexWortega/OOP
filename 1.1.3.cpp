#include <iostream>

using namespace std;

int main() {
    long long int n;
    int k = 0;
    cin >> n;
    do  {
        k++;
        n /= 10;
    } while (n != 0);
    cout << "Number of digits: " << k;
    return 0;
}
