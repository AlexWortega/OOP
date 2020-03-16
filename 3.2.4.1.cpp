#include <iostream>
using namespace std;

class  MyClass{
private:
public:
    MyClass() {
        cout << "Constructor" << endl;
    }

    ~MyClass() {
        cout << "Destructor";
    }
};

int main()
{
    MyClass object;
    return 0;
}
