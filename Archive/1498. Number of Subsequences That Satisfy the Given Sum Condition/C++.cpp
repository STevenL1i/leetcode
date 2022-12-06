#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int numSubseq(vector<int>& nums, int target)
{
    sort(nums.begin(), nums.end());
    int x = 0;
    int y = nums.size()-1;
    int mod = 1e9 + 7;
    int count = 0;
    while (x <= y)
    {
        if (nums[x] + nums[y] > target)
            y--;
        else {
            count += int(pow(2, y-x)) % mod;
            x++;
        }
    }

    return count;

}


int main()
{
    vector<int> nums;
    nums = {3,5,6,7};
    cout << numSubseq(nums, 9) << endl;
    nums = {3,3,6,8};
    cout << numSubseq(nums, 10) << endl;
    nums = {2,3,3,4,6,7};
    cout << numSubseq(nums, 12) << endl;
    nums = {2,9,4,3,6,9,1,1};
    cout << numSubseq(nums, 6) << endl;    // answer: 29
    nums = {7,10,7,3,7,5,4};
    cout << numSubseq(nums, 12) << endl;   // answer: 56

    // this case is still incorrect
    nums = {14,4,6,6,20,8,5,6,8,12,6,10,14,9,17,16,9,7,14,11,14,15,13,11,10,18,13,17,17,14,17,7,9,5,10,13,8,5,18,20,7,5,5,15,19,14};
    cout << numSubseq(nums, 22) << endl;
}