#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n] ;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k--;

    int rem = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < arr[k] || arr[i] == 0)
            rem++;
        else
            break;
    }

    cout << n - rem << endl;

    return 0;
}
