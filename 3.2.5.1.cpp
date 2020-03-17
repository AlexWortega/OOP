#include <iostream>
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

    int operation() {
        if (c == '+') {
            return a+b;
        } else if (c == '-') {
            return a-b;
        } else if (c == '*') {
            return a*b;
        } else {
            return a%b;
        }
    }

};


int main()
{
    int a, b, count = 1;
    char c;
    cin >> a >> c >> b;
    MyClass object(a, c, b);
    object.operation();
    while (c != 'C') {
        if (count % 3 == 0) {
            cout << object.operation() << endl;
        }
        count++;
        cin >> c;
        if (c == 'C') {
            break;
        } else {
            cin >> b;
            object.set(object.operation(), c, b);
        }


    }
    return 0;
}