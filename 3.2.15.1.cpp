#include <iostream>

using namespace std;

class MyClass1;

class MyClass {
public:
    int property;
	MyClass(int p) {
		property = p;
	}

	friend void compare(const MyClass &myClass, const MyClass1 &myClass1);
};

class MyClass1 {
public:
    int property1, property2;
	MyClass1(int p1, int p2) {
		property1 = p1;
		property2 = p2;
	}

	friend void compare(const MyClass &myClass, const MyClass1 &myClass1);
};

void compare(MyClass &myClass, MyClass1 &myClass1) {
	cout << fmax(myClass.property , fmax(myClass1.property1, myClass1.property2));
}

int main()
{
    int p, p1, p2;
    cin >> p;
    MyClass obj1(p);

    cin >> p1 >> p2;
    MyClass1 obj2(p1, p2);

    compare(obj1, obj2);
    return 0;
}
