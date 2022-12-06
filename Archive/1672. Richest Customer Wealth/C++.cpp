#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int maxiumuWealth(vector<vector<int>>& accounts)
{
    vector<int> allaccts;
    for (vector<int> acct: accounts) {
        int acctsum = accumulate(acct.begin(), acct.end(), 0);
        allaccts.push_back(acctsum);
    }

    sort(allaccts.begin(), allaccts.end(), greater<int>());
    return allaccts[0];
}


int main()
{
    vector<vector<int>> accts;
    accts = {{1,2,3},{3,2,1}};
    cout << maxiumuWealth(accts) << endl;
    accts = {{1,5},{7,3},{3,5}};
    cout << maxiumuWealth(accts) << endl;
    accts = {{2,8,7},{7,1,3},{1,9,5}};
    cout << maxiumuWealth(accts) << endl;
}