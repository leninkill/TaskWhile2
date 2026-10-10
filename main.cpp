#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int sum = 0;

    while (n != 0) {
        cin >> n;

        if (n != 0)
            sum += n;
    }

    cout << sum;

    return 0;
}