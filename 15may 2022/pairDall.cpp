#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T, N;
    cin >> T;
    cin >> N;
    int types[N];
    while (T--)
    {
        for (int i = 0; i < N; i++)
        {
            cin >> types[i];
        }

        sort(types, types + N);

        for (int i = 0; i < N; i += 2)
        {
            if (types[i] != types[i + 1])
            {
                cout << types[i]<<endl;
                break;
            }
        }
    }
    return 0;
}