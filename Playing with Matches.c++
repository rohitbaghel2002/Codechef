#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        int r;
        cin >> a >> b;
        int c = a + b;
        int temp = c;
        int count = 0;
        while (temp != 0)
        {
            r = temp % 10;
            count = count + arr[r];
            temp = temp / 10;
        }
        cout << count << endl;
    }
    return 0;
}