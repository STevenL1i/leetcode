#include <iostream>
#include <map>
using namespace std;

int romanToInt(string s) {
    map<string, int> mp {
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000}
    };

    int ans = 0;
    string a,b;
    for (int i=0; i < s.size(); i++)
    {
        a = s[i]; b = s[i+1];
        if (mp[a] < mp[b] == true)
            ans -= mp[a];
        else
            ans += mp[a];
    }

    return ans;
}

int main()
{
    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}