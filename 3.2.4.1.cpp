#include <iostream>
using namespace std;

class  MyClass{
private:
public:
    MyClass() {
        cout << "Constructor" << endl;
    }

    ~MyClass() {
        cout << "Destructer";
    }
};

int main()
{
    MyClass object;
    return 0;
}