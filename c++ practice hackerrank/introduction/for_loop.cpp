#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    string ar[ ] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++)
    {
        if( 1 <= i && i <= 9)
        {
            cout << ar[i -1] << endl;
        }
        else{
            i % 2 == 0 ? cout << "even\n" : cout << "odd\n";
        }
    }

    return 0;
}
