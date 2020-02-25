#include <iostream>
#include <vector>
using namespace std;

class MyClass {
private:
    vector<int> v;
    int n;
public:
    MyClass(int _n) {
        set(_n);
    }

    void set(int _n) {
        cout << "Enter array: ";
        for (int i = 0; i < _n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }

    void get(int _n) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    void reverse(int _n) {
        for (int i = 0; i < _n/2; i++) {
            swap(v[i], v[_n-i-1]);
        }
    }
};

int main() {
    int k;
    cout << "Enter number of elements: ";
    cin >> k;
    MyClass array(k);
    cout << "Array: ";
    array.get(k);
    cout << "Reverse: ";
    array.reverse(k);
    array.get(k);
    return 0;
}
