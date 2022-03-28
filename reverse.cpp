#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = a;
    int c = 0;
    int len = 0;
    while (a != 0)
    {
        len++;
        a /= 10;
    }
    int arr[5];
    for (int i = len - 1; i > -1; i--)
    {
        arr[i] = b % 10;
        b /= 10;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = len - 1; i > -1; i--)
    {
        c += arr[i];
        c *= 10;
    }
    c /= 10;
    cout << c << endl;
    return 0;
}