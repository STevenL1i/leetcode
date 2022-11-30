## solution 1: use strength as key, row as value,
## then order strength to sort row
def kWeakestRows(mat: list[list[int]], k:int) -> list[int]:
    rowstrength = {}
    for i in range(0, len(mat)):
        try:
            rowstrength[sum(mat[i])]
            rowstrength[sum(mat[i])].append(i)
        except KeyError:
            rowstrength[sum(mat[i])] = [i]

    skey = list(rowstrength.keys())
    skey.sort()
    ordered = []
    for l in skey:
        for row in rowstrength[l]:
            ordered.append(row)
            if len(ordered) == k:
                return ordered


## solution 2: directly use lambda sort
def kWeakestRows(mat: list[list[int]], k: int) -> list[int]:
    m = len(mat)
    rows = sorted(range(m), key=lambda i: (mat[i], i))
    del rows[k:]
    return rows
    





mat = [
    [1,1,0,0,0],
    [1,1,1,1,0],
    [1,0,0,0,0],
    [1,1,0,0,0],
    [1,1,1,1,1]
]
print(kWeakestRows(mat, 3))

mat = [
    [1,0,0,0],
    [1,1,1,1],
    [1,0,0,0],
    [1,0,0,0]
]
print(kWeakestRows(mat, 2))
