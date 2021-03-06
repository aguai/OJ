#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <fstream>
#define debug puts("-----")
#define pi (acos(-1.0))
#define eps (1e-8)
#define inf (1<<30)
using namespace std;

int main()
{
    char a[1000002] = {'0'};
    int n, i;
    int x, y;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        a[i] = x + y + '0';
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] > '9')
        {
            a[i] = a[i] - 10;
            a[i - 1] = a[i - 1] + 1;
        }
    }
    printf("%s\n", a);
    return 0;
}