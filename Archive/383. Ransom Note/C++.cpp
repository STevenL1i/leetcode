#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int findIndex(vector<char> v, char value)
{
    int i = 0;
    while(i < v.size())
    {
        if (v[i] == value)
            break;
        i++;
    }

    if (i == v.size())
        return -1;
    else
        return i;
}

bool canConstruct(string ransomNote, string magazine) {
    char s[magazine.length()+1];
    strcpy(s, magazine.c_str());

    vector<char> token(magazine.begin(), magazine.end());
    for(char c: ransomNote)
    {
        int i = findIndex(token, c);
        if(i == -1)
            return false;
        else
            token.erase(token.begin()+i);
    }

    return true;
}

int main()
{
    cout << canConstruct("a", "b") << endl;
    cout << canConstruct("aa", "ab") << endl;
    cout << canConstruct("aa", "aab") << endl;
    cout << canConstruct("a", "abcdefg") << endl;
    cout << canConstruct("a", "ag") << endl;
    cout << canConstruct("a", "g") << endl;
}