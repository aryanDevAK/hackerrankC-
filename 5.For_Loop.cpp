#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    for (int n = a; n <= b; ++n)
    {
        if (n >= 1 && n <= 9)
        {
            switch (n)
            {
            case 1:
                cout << "one\n";
                break;
            case 2:
                cout << "two\n";
                break;
            case 3:
                cout << "three\n";
                break;
            case 4:
                cout << "four\n";
                break;
            case 5:
                cout << "five\n";
                break;
            case 6:
                cout << "six\n";
                break;
            case 7:
                cout << "seven\n";
                break;
            case 8:
                cout << "eight\n";
                break;
            case 9:
                cout << "nine\n";
                break;
            }
        }
        else if (n > 9 && n % 2 == 0)
        {
            cout << "even\n";
        }
        else if (n > 9)
        {
            cout << "odd\n";
        }
    }

    return 0;
}