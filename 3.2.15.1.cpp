#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MyClass1;

class MyClass {
private:
    int property;
public:
    void set(MyClass &myClass, int p) {
        myClass.property = p;
    }

    friend void compare(MyClass &myClass, MyClass1 &myClass1);
};

class MyClass1 {
private:
    int property1, property2;
public:
    void set(MyClass1 &myClass1, int p1, int p2) {
        myClass1.property1 = p1;
        myClass1.property2 = p2;
    }

    friend void compare(MyClass &myClass, MyClass1 &myClass1);
};

void compare(MyClass &myClass, MyClass1 &myClass1) {
    cout << fmax(myClass.property, fmax(myClass1.property1, myClass1.property2));
}


int main()
{
    MyClass obj1{};
    int a, b;
    cin >> a;
    obj1.set(obj1, a);

    MyClass1 obj2{};
    cin >> a >> b;
    obj2.set(obj2, a, b);

    compare(obj1, obj2);
    return 0;
}
