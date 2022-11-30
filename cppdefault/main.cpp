#include <iostream>
#include <vector>
using namespace std;

int maxiumuWealth(vector<vector<int>>& accounts)
{
    return 0;
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