#include <iostream>
using namespace std;

void printFizzBuzz(int n) {
    for (int num = 1; num <= n; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (num % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (num % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << num << endl;
        }
    }
}

int main() {
    int T;
    cin >> T; // Read the number of test cases
    int N;
    for (int i = 0; i < T; i++) {
        cin >> N; // Read each N value
        printFizzBuzz(N); // Print FizzBuzz for each N
    }
    return 0;
}
