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

const int maxn = 100010;
int a[maxn];

int main(int argc, char const *argv[])
{
    int n, k;

    while (scanf("%d", &n) != EOF)
    {
        int i;
        for (i = 1 ; i <= n ; ++i)
        {
            scanf("%d", &a[i]);
        }

        sort(a + 1, a + 1 + n);

        char str[maxn];
        scanf("%s", &str);

        scanf("%d", &k);
        for (i = 1 ; i <= k ; ++i)
        {
            int b;
            scanf("%d", &b);
            printf("%d\n", a[b]);
        }
    }

    return 0;
}