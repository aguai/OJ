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
#define inf 0x3f3f3f3f
#define ll long long int
using namespace std;

#define MAXN 10000+10
#define MAXS 50+10

int n,t,T;
int v[MAXS];
int dp[MAXS][MAXN];
int path[MAXS][MAXN];
int Max;

void init()
{
    memset(path,0,sizeof(path));
    memset(dp,0,sizeof(dp));
    memset(v,0,sizeof(v));
    scanf("%d%d", &n,&t);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &v[i]);
    }
}

int main(int argc, char const *argv[])
{
    scanf("%d", &T);
    for(int flag=1; flag<=T; flag++)
    {
        init();
        for(int i=n; i>=1; i--)
        {
            for(int j=0; j<=t; j++)
            {
                dp[i][j]=(i==n)?0:dp[i+1][j];
                path[i][j]=path[i+1][j];
                if(j>=v[i])
                {
                    if(dp[i][j]<dp[i+1][j-v[i]]+1)
                    {
                        path[i][j]=v[i]+path[i+1][j-v[i]];
                        dp[i][j]=dp[i+1][j-v[i]]+1;
                    }
                    else if(dp[i][j]==dp[i+1][j-v[i]]+1)
                    {
                        path[i][j]=max(path[i+1][j-v[i]]+v[i],path[i+1][j]);
                    }
                }
            }
        }
        Max=-inf;
        for(int i=t-1; i>=0; i--)
        {
            if(dp[1][i]==dp[1][t-1]&&Max<path[1][i])
            {
                Max=path[1][i];
            }
        }
        printf("Case %d: %d %d\n", flag, dp[1][t-1]+1, Max+678);
    }
    return 0;
}
