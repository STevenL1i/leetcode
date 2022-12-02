def maxProfit(prices: list[int]) -> int:
    low = 10**4; high = -1
    maxprof = 0

    for p in prices:
        if p < low:
            if high - low >= maxprof:
                maxprof = high - low
            low = high = p
            
        elif p > high:
            high = p
    
    if high - low >= maxprof:
        maxprof = high - low

    return maxprof


print(maxProfit([7,1,5,3,6,4]))
print(maxProfit([7,6,4,3,1]))