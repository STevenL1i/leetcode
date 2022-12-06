def canConstruct(ransomNote: str, magazine: str) -> bool:
    token = list(magazine)
    
    for c in ransomNote:
        try:
            token.remove(c)
        except ValueError:
            return False
    
    return True



print(canConstruct(ransomNote="a", magazine="b"))
print(canConstruct(ransomNote="aa", magazine="ab"))
print(canConstruct(ransomNote="aa", magazine="aab"))