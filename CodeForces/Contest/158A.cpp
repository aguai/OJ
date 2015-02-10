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
#define inf (1<<28)
#define ll long long int
using namespace std;

#define MAXN 50+10

int n, k;
int a[MAXN];
int ans = 0;

bool cmp(int x, int y)
{
    return x > y;
}

int main(int argc, char const *argv[])
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n, cmp);
    for(int i=0;i<n;i++)
    {
    	if(a[i]>=a[k-1]&&a[i]>0)	ans++;
    }
    cout<<ans<<endl;
    return 0;
}
