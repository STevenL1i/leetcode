def thesort(num):
    i = len(str(num))
    while True:
        try:
            return str(num)[i]
        except IndexError:
            return f'{num}'*i


def largestNumber(nums: list[int]) -> str:
    numdict = {}
    for num in nums:
        numstr = str(num)
        try:
            numdict[numstr[0]].append(num)
        except KeyError:
            numdict[numstr[0]] = [num]

    output = ""
    lenkey = list(numdict.keys())
    lenkey.sort(reverse=True)
    for length in lenkey:
        numlist = numdict[length]
        numlist = sorted(numlist, key=thesort, reverse=True)
        print(numlist)
        for num in numlist:
            output += str(num)
    
    return output




print(largestNumber([10,2]))
print(largestNumber([3,30,34,5,9]))
print(largestNumber([34323,3432]))