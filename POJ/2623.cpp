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

int comp(const void *a, const void *b)
{
    return (*(int *)a - * (int *)b);
}

int main()
{
    int n, i;
    int a[250050];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), comp);
    if (n % 2 != 0)
        printf("%.1f\n", (double)(a[(n + 1) / 2 - 1]));
    else
        printf("%.1f\n", a[n / 2 - 1] / 2.0 + a[n / 2] / 2.0);
    return 0;
}