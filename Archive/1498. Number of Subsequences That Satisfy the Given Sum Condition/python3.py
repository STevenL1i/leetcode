### Time Limit Exceeded ###
from itertools import combinations

def numSubseq(nums: list[int], target:int) -> int:
    count = 0
    for n in range(1, len(nums)+1):
        combo = list(combinations(nums, n))
        for comb in combo:
            if min(comb) + max(comb) <= target:
                count += 1
    
    return count


def numSubseq(nums: list[int], target:int) -> int:
    nums.sort()
    x = 0; y = len(nums) - 1
    count = 0
    while x <= y:
        if nums[x] + nums[y] > target:
            y -= 1
        else:
            count += pow(2, (y-x), 10**9+7)
            x += 1
        
    return count % (10**9+7)
    



print(numSubseq([3,5,6,7], 9))
print(numSubseq([3,3,6,8], 10))
print(numSubseq([2,3,3,4,6,7], 12))
print(numSubseq([2,9,4,3,6,9,1,1], 6))  ## answer: 29
print(numSubseq([7,10,7,3,7,5,4], 12))  ## answer: 56