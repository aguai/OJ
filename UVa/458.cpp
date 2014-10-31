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

#define MAXN 1<<10

char a[MAXN],b[MAXN];

int main(int argc, char const *argv[])
{
    while(~scanf("%s",a))
    {
        memset(b,0,sizeof(b));
        for(int i=0;i<strlen(a);i++)
        {
            b[i]=a[i]-7;
        }
        printf("%s\n", b);
    }
	return 0;
}
