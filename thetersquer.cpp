#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;


    long long flagstonesN = (n + a - 1) / a;
    long long flagstonesM = (m + a - 1) / a;


    long long totalFlagstones = flagstonesN * flagstonesM;


    cout << totalFlagstones << endl;

    return 0;
}

