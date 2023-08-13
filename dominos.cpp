#include <iostream>

using namespace std;

int max_dominoes(int M, int N) {
    if (M % 2 == 0) {
        return (M / 2) * N;
    } else {
        return ((M - 1) / 2) * N + N / 2;
    }
}

int main() {
    int M, N;
    cin >> M >> N;
    cout << max_dominoes(M, N) << endl;

    return 0;
}

