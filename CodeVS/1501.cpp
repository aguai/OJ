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

int a[1000][2],s[1000];
int i,n,x,y;

void dfs(int i,int k)
{
	s[k]=s[k]+1;
	if(k>x)	x=k;
	if(a[i][1]!=0)	dfs(a[i][1],k+1);
	if(a[i][2]!=0)	dfs(a[i][2],k+1);
}

int main(void)
{
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	memset(s,0,sizeof(s));
	for(i=1;i<=n;i++)
		scanf("%d%d",&a[i][1],&a[i][2]);
	x=0;
	dfs(1,1);
	y=0;
	for(i=1;i<1000;i++)
		if(s[i]>y)	y=s[i];
	printf("%d %d",y,x);
	return 0;
}
