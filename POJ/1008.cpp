#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int transHabb(string month)
{
    if (!month.compare("pop"))    return 1;
    else if (!month.compare("no"))   return 2;
    else if (!month.compare("zip"))   return 3;
    else if (!month.compare("zotz"))   return 4;
    else if (!month.compare("tzec"))   return 5;
    else if (!month.compare("xul"))   return 6;
    else if (!month.compare("yoxkin"))   return 7;
    else if (!month.compare("mol"))   return 8;
    else if (!month.compare("chen"))   return 9;
    else if (!month.compare("yax"))   return 10;
    else if (!month.compare("zac"))   return 11;
    else if (!month.compare("ceh"))   return 12;
    else if (!month.compare("mac"))   return 13;
    else if (!month.compare("kankin"))   return 14;
    else if (!month.compare("muan"))   return 15;
    else if (!month.compare("pax"))   return 16;
    else if (!month.compare("koyab"))   return 17;
    else if (!month.compare("cumhu"))   return 18;
    else return 19;

}

string transTzolkin(int day)
{
    if (day == 1)    return "imix";
    else if (day == 2)   return "ik";
    else if (day == 3)   return "akbal";
    else if (day == 4)   return "kan";
    else if (day == 5)   return "chicchan";
    else if (day == 6)   return "cimi";
    else if (day == 7)   return "manik";
    else if (day == 8)   return "lamat";
    else if (day == 9)   return "muluk";
    else if (day == 10)   return "ok";
    else if (day == 11)   return "chuen";
    else if (day == 12)   return "eb";
    else if (day == 13)   return "ben";
    else if (day == 14)   return "ix";
    else if (day == 15)   return "mem";
    else if (day == 16)   return "cib";
    else if (day == 17)   return "caban";
    else if (day == 18)   return "eznab";
    else if (day == 19)   return "canac";
    else   return "ahau";
}

int Habb(int day, string month, int year)
{
    return day + (transHabb(month) - 1) * 20 + year * 365;
}

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    while (n--)
    {
        int Tzolkinmonth = 0, Tzolkinyear = 0, Habbday = 0, Habbyear = 0, days = 0;
        string Tzolkinday = "\0", Habbmonth = "\0";
        scanf("%d. ", &Habbday);
        cin >> Habbmonth;
        scanf(" %d", &Habbyear);
        days = Habb(Habbday, Habbmonth, Habbyear);
        Tzolkinyear = days / 260;
        Tzolkinmonth = days % 260 % 13+1;
        Tzolkinday = transTzolkin(days % 260 % 20+1);
        cout << Tzolkinmonth << " " << Tzolkinday << " " << Tzolkinyear << endl;
    }
}