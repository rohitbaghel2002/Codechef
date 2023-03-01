#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, J = 0;
        cin >> N >> K;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (a[i] > K)
            {
                J++;
            }
        }
        cout << J << endl;
    }
    return 0;
}
