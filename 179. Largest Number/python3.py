def largestNumber(nums: list[int]) -> str:
    for i in range(len(nums)):
        nums[i] = str(nums[i])
    
    nums.sort(reverse=True)

    return nums



print(largestNumber([10,2]))
print(largestNumber([3,30,34,5,9]))