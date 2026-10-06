#include <iostream>


using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int day = 1, amount = x;

    while (amount < y) {
        amount *= 1.1;
        day++;
    }

    cout << day << endl;
    return 0;
}