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

#define MAXN 100000+10

int n,a[MAXN];

void init()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)	scanf("%d", &a[i]);
}

int main(int argc, char const *argv[])
{
	init();
	sort(a,a+n);
	printf("%d", a[0]);
	for(int i=1;i<n;i++)	printf(" %d", a[i]);
	return 0;
}