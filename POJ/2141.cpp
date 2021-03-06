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

char keys[30];

int main(int argc, char const *argv[])
{
    int i, j;
    char tmp;
    while (scanf("%s", keys) != EOF)
    {
        getchar();
        while ((tmp = getchar()) != '\n')
        {
            if (tmp >= 'a' && tmp <= 'z')
            {
                putchar(keys[tmp - 'a']);
            }
            else if (tmp >= 'A' && tmp <= 'Z')
            {
                putchar((keys[tmp - 'A'] - 32));
            }
            else
            {
                putchar(tmp);
            }
        }
        putchar(tmp);
    }
    return 0;
}
