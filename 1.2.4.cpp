#include <iostream>
#include <vector>
using namespace std;

class MyClass {
private:
    int a, b;
    char c;
public:
    MyClass(int _a, char _c, int _b) {
        set(_a, _c, _b);
    }
    void set(int _a, char _c, int _b) {
        a = _a;
        b = _b;
        c = _c;
    }

    int operation(int _a, char _c, int _b) {
        if (c == '+') {
            return a+b;
        } else if (c == '-') {
            return a-b;
        } else if (c == '*') {
            return a*b;
        } else {
            return a/b;
        }
    }

};

int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    MyClass obj(a, c, b);
    a = obj.operation(a, c, b);
    cout << a << endl;
    cin >> c >> b;

    MyClass obj1(a, c, b);
    a = obj1.operation(a, c, b);
    cout << a << endl;
    cin >> c >> b;

    MyClass obj2(a, c, b);
    a = obj2.operation(a, c, b);
    cout << a << endl;
    cin >> c >> b;
    return 0;
}
