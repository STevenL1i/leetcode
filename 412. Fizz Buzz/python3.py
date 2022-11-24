
def fizzBuzz(n: int) -> list[str]:
    outputlist = []
    for i in range(1, n+1):
        if i % 15 == 0:
            outputlist.append("FizzBuzz")
        elif i % 5 == 0:
            outputlist.append("Buzz")
        elif i % 3 == 0:
            outputlist.append("Fizz")
        else:
            outputlist.append(str(i))
    
    return outputlist



print(fizzBuzz(3))
print(fizzBuzz(5))
print(fizzBuzz(15))
print(fizzBuzz(25))
print(fizzBuzz(30))
print(fizzBuzz(17))

