#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 15; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "fizzbuzz" << endl;
        } else if (num % 3 == 0) {
            cout <<"fizz"<< endl;
        } else if (num % 5 == 0) {
            cout <<"buzz"<< endl;
        } else {
            cout << num << endl;
        }
    }
    return 0;
}
