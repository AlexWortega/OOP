#include <iostream>
using namespace std;

class MyClass {
private:
    long long int n;
public:
    MyClass(long long int _n) {
        set(_n);
    }

    void set(long long int _n) {
        n = _n;
    }

    long long int get() {
        return n;
    }

    int digitCount() {
        int count = 0;
        do  {
            count++;
            n /= 10;
        } while (n != 0);
        return count;
    }
};

int main()
{
    long long int number;
    cin >> number;
    MyClass object(number);
    cout << "n = " << object.get() << endl;
    cout << "N = " << object.digitCount();

    return 0;
}