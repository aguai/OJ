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
#define debug "output for debug\n"
#define pi (acos(-1.0))
#define eps (1e-8)
#define inf (1<<28)
#define ll long long int
using namespace std;

#define MAXN 200000+10

int t, n, a[MAXN], l[MAXN], r[MAXN], Min[MAXN];
int ans;

void init()
{
    ans=0;
    scanf("%d", &n);
    l[0] = 1;
    r[n - 1] = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i)
        {
            l[i] = 1;
            if (a[i] > a[i - 1]) l[i] += l[i - 1];
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        r[i] = 1;
        if (a[i] < a[i + 1]) r[i] += r[i + 1];
    }
}

int main(int argc, char const *argv[])
{
    scanf("%d", &t);
    while (t--)
    {
        init();
        memset(Min, 0x3f, sizeof(Min));
        for (int i = 0; i < n; i++)
        {
            int len = lower_bound(Min + 1, Min + 1 + n, a[i]) - Min;
            ans = max(ans, r[i] + len - 1);
            Min[l[i]] = min(Min[l[i]], a[i]);
        }
        printf("%d\n", ans);
    }

    return 0;
}
