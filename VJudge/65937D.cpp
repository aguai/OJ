/*
//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？
*/
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

#define MOD 1000007
#define MAXN 100000+10

int n;
bool flag;
vector<int> f[MOD];
int a[MAXN][6];


int main(int argc, char const *argv[])
{
    scanf("%d", &n);
    flag = false;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<6; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

        //判长度重合
        for(int kk=0; kk<f[sum%MOD].size(); kk++)
        {
            int j = f[sum % MOD][kk];
            for (int k = 0; k < 6; k++)
            {
                flag = true;
                for (int p = 0; p < 6; p++)
                {
                    if (a[i][p] != a[j][(k + p) % 6])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;

            //判旋转重合
            flag = true;
            for (int k = 0; k < 6; k++)
            {
                flag = true;
                for (int p = 0; p < 6; p++)
                    if (a[i][p] != a[j][(k - p + 6) % 6])
                    {
                        flag = false;
                        break;
                    }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) break;

        f[sum % MOD].push_back(i);
    }
    flag?puts("Twin snowflakes found."):puts("No two snowflakes are alike.");
    return 0;
}
