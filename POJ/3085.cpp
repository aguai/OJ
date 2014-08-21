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
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    while (n--)
    {
        int num1, num2, num3, num4;
        num1 = num2 = num3 = num4 = 0;
        int c;
        cin >> c;
        if (c >= 25)
        {
            num1 = c / 25;
            c = c % 25;
        }
        if (c >= 10 && c < 25)
        {
            num2 = c / 10;
            c = c % 10;
        }
        if (c >= 5 && c < 10)
        {
            num3 = c / 5;
            c = c % 5;
        }
        if (c < 5 && c > 0)
            num4 = c;
        cout << i << " " << num1 << " QUARTER(S), " << num2 << " DIME(S), " << num3 << " NICKEL(S), " << num4 << " PENNY(S)" << endl;
        i++;
    }
    return 0;
}
