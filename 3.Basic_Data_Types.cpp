#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;

    cout << a << endl
         << b << endl
         << c << endl;
    printf("%.3f\n", d);
    printf("%.9lf\n", e);
    return 0;
}
