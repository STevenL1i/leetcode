#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int low = pow(10, 4);
    int high = -1;
    int maxprof = 0;

    for (int p: prices)
    {
        if (p < low) {
            if (high - low >= maxprof)
                maxprof = high - low;
            low = high = p;
        }
        else if (p > high)
            high = p;
    }

    if (high - low >= maxprof)
        maxprof = high - low;

    return maxprof;
}


int main()
{
    vector<int> price;
    price = {7,1,5,3,6,4};
    cout << maxProfit(price) << endl;
    price = {7,6,4,3,1};
    cout << maxProfit(price) << endl;
}