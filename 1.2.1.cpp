#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    int A, B, C;
public:
    Triangle(int a, int b, int c) {
        setSide(a, b, c);
    }

    void setSide(int a, int b, int c) {
        A = a;
        B = b;
        C = c;
    }

    void res(int side1, int side2, int side3) {
        int p = (side1 + side2 + side3) / 2;
        cout << "S = " << sqrt(p * (p - side1) * (p - side2) * (p - side3));
        cout << " P = " << p * 2;
    };
};

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    Triangle PQR(a1, a2, a3);
    PQR.res(a1, a2, a3);
    return 0;
}
