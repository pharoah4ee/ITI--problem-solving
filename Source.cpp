#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    int min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }

    int max_val = a;
    if (b > max_val) {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }

    int mid_val = (a + b + c) - min_val - max_val;


    cout << min_val << endl;
    cout << mid_val << endl;
    cout << max_val << endl;

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}






