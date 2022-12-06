def numberOfsetps(num:int) -> int:
    index = 0
    while num != 0:
        if num % 2 == 0:
            num /= 2
        else:
            num -= 1
        
        index += 1
    
    return index




print(numberOfsetps(14))
print(numberOfsetps(8))
print(numberOfsetps(123))