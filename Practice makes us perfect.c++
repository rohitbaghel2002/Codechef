#include <iostream>
using namespace std;

int main()
{
    int a[4], j = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] >= 10)
        {
            j++;
        }
    }
    cout << j;
    return 0;
}
