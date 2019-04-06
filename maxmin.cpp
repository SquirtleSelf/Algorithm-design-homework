#include <stdlib.h>
#include <iostream>

int Max(int a, int b) { return (a >= b) ? a : b; }
int Min(int a, int b) { return (a <= b) ? a : b; }

void MaxMin(int i, int j, int &fMax, int &fMin, int A[]) {
    //int mid;
    if (i == j) fMax = fMin = A[i];
    else if (j - i == 1) { 
        fMax = Max(A[i],A[j]); 
        fMin = Min(A[i], A[j]); 
    } else {
        int lMax, lMin, rMax, rMin;
        int mid = (i + j) >> 1;
        MaxMin(i, mid, lMax, lMin, A);
        MaxMin(mid + 1, j, rMax, rMin, A);
        fMax =  Max(lMax, rMax);
        fMin =  Min(lMin, rMin);
    }
}

int main() {
    int a[5] = {3, 4, 1, 2, 5};
    int fMax, fMin;
    MaxMin(0, 4, fMax, fMin, a);
    std::cout << "The maximum number in array a is " << fMax 
    << ", while the minimum number is " << fMin << std::endl;

    system("PAUSE");
    return 0;
}