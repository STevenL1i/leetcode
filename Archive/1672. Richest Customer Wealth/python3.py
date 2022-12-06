def maximumWealth(accounts: list[list[int]]) -> int:
    maxacct = sorted(accounts, key=sum, reverse=True)
    return sum(maxacct[0])



accounts = [[1,2,3],[3,2,1]]
print(maximumWealth(accounts))
accounts = [[1,5],[7,3],[3,5]]
print(maximumWealth(accounts))
accounts = [[2,8,7],[7,1,3],[1,9,5]]
print(maximumWealth(accounts))