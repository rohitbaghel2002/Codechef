#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 50 && n <= 100)
    {
        cout << "50";
    }
    else if (n > 100)
    {
        cout << "0";
    }
    else
        cout << "100";
    return 0;
}
