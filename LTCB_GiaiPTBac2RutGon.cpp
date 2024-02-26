#include <iostream>
#include <cmath> // Sử dụng hàm sqrt trong thư viện cmath
using namespace std;

int main() {
    float a, b, c, x1, x2, delta;

    cout << "Nhap he so a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            cout << ((c != 0) ? "PTVN" : "PT co VSN");
        }
        else {
            x1 = x2 = -c / b;
            cout << "PT co nghiem x = " << x1;
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "PTVN";
        }
        else if (delta == 0) {
            x1 = x2 = -b / (2 * a);
            cout << "PT co nghiem kep x1 = x2 = " << x1;
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "PT co 2 nghiem phan biet \n";
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
    }
    return 0;
}
