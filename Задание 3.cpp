#include <iostream>
using namespace std;

int main() {
    int N, x;
    cin >> N;

    int stack[1000];
    int top = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;
        if (top > 0 && stack[top - 1] == x) {
            top--;
        } else {
            stack[top] = x;
            top++;
        }
    }

    cout << N - top;
    return 0;
}