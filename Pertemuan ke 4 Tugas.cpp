
#include <iostream>
using namespace std;

int main() {
    int A = 3, B = 6, C = 2;
    int K = 5, L = 4, M = 3;

    cout << "Program Ekspresi Relasi dan Logika" << endl;
    cout << "Nilai A = " << A << endl;
    cout << "Nilai B = " << B << endl;
    cout << "Nilai C = " << C << endl;
    cout << "Nilai K = " << K << endl;
    cout << "Nilai L = " << L << endl;
    cout << "Nilai M = " << M << endl;

    cout << "\nHasil Ekspresi:" << endl;

    cout << "a. " << (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2) << endl;

    cout << "b. " << (K + 5 < M || (C * M < L && 2 * M - L > 0)) << endl;

    cout << "c. " << (L + 5 < M || C * K < L && 2 * K - L > 0) << endl;

    cout << "d. " << (A * 4 <= 3 * M + B) << endl;

    cout << "e. " << (K + 10 > A && L - 2 > 4 * C) << endl;

    return 0;
}
