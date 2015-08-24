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

typedef long long int ll;
const double pi = acos(-1.0);
const double eps = 1e-8;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;
using namespace std;

int dp[105]= {0};

void init()
{
    for(int i=0; i<100; i++)
        dp[i]=inf;
    dp[0]=0;
    for(int i=1; i<100; i++)
    {
        int a0=i%10;
        int a1=i/10%10;
        dp[i]=dp[i-a0];
        dp[i]=min(dp[i],dp[i-a1]);
        dp[i]++;
    }
}

ll n,ans;
int main()
{
    init();
    while(~scanf("%lld", &n))
    {
        ans=18*(n/100);
        if(n%100!=0) ans+=dp[n%100];
        printf("%lld\n", ans);
    }
}