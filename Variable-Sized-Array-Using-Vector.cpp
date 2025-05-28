#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;

    cin >> n >> q; // Number of Arrays and Number of Queries

    vector<vector<int>> arrays(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;                   // Size of Array stored in arr[i] position
        arrays[i] = vector<int>(k); // Storing the variable sized array of size k in the array with size i

        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Processing Queries
    for (int query_num = 1; query_num <= q; query_num++)
    {
        int i, j;
        cin >> i >> j;

        cout << arrays[i][j] << endl;
    }
    return 0;
}
