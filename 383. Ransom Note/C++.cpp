
#include <iostream>
#include <vector>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    char s[magazine.length()+1];
    strcpy(s, magazine.c_str());

    vector<char> token(magazine.begin(), magazine.end());


    return true;
}

int main()
{
    cout << canConstruct("a", "baaaaa") << endl;
}