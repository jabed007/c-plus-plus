#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: " 5;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "Sum of the elements are: " << sum << endl;
    return 0;
}