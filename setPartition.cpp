// divide and conquer

#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int f(int n, int m) {
    if (m == 1 || n == m) return 1;
    else return f(n - 1, m) * m + f(n - 1, m -1);
}

int main() {
    int n;
    while (true) {
        int cnt = 0;
        cout << "Enter the card of the set A exit with 0" << endl;
        cin >> n;
        if (!n) break;
        for (int i = 1; i <= n; i++) {
            cout << "f(" << n << "," << i << ") = " << f(n, i) << endl;
            cnt = cnt + f(n, i);
        } 
        cout << "if card(A) = " << n 
        << ", partition of A add up to " << cnt << endl << endl; 
    }

    system("PAUSE");
    return 0;
}