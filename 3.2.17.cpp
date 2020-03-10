#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class MyClass {
private:
    int n;
    vector<int> v;
public:
    MyClass(long long int _n) {
        set(_n);
    }

    void set(long long int _n) {
        n = _n;

        for (int i = 0; i < n; i++) {
            v.push_back(i*i);
        }
    }

    void getReverse() {
        for (int i = n-1; i >= 0; i--) {
            cout << setfill(' ') << setw(5) <<v[i] << " ";
        }
    }

};

int main()
{
    int size;
    cin >> size;
    MyClass object(size);
    object.getReverse();
    return 0;
}