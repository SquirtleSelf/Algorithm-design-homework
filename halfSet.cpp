#include <stdlib.h>
#include <iostream>

int a[1001] = {0};

using std::cout;
using std::cin;
using std::endl;

int comp(int n) {
    int ans = 1;
    if(a[n]) return a[n];
    for (int i = 1; i <= n / 2; i++) ans += comp(i);
    return a[n] = ans;
}

int main() {
    int n;
    cout << "Enter a number less than 1000" << endl;
    cin >> n;
    cout << "card(halfset(" << n << ")) = " << comp(n) << endl;

    system("PAUSE");
    return 0;
}