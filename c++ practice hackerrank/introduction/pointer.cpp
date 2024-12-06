#include<bits/stdc++.h>
using namespace std;
void increment(int *x, int *y) {
    int temp = *x;
    *x = (*x + *y);
    *y = abs((temp - *y));
}

int main()
{
    int a, b;
    cin >> a >> b;
    increment(&a, &b);
    cout << a <<endl << b << endl;
    return 0;
}



