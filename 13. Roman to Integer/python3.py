def romanToInt(s: str) -> int:
    mp = {
        "I":  1,
        "V":  5,
        "X":  10,
        "L":  50,
        "C":  100,
        "D":  500,
        "M":  1000
    }
    ans = 0
    for i in range(0, len(s)):
        try:
            if mp[s[i]] < mp[s[i+1]]:
                ans -= mp[s[i]]
            else:
                ans += mp[s[i]]
        except IndexError:
            ans += mp[s[i]]
    
    return ans



print(romanToInt("III"))
print(romanToInt("LVIII"))
print(romanToInt("MCMXCIV"))