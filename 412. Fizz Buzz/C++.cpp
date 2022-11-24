#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> outputVec;
    for(int i = 1; i <= n; i++) {
        if (i % 15 == 0)
            outputVec.push_back("FizzBuzz");
        else if (i % 5 == 0)
            outputVec.push_back("Buzz");
        else if (i % 3 == 0)
            outputVec.push_back("Fizz");
        else
            outputVec.push_back(to_string(i));
    }

    return outputVec;
}

// this function is use for testing
// not part of leetcode solution
void printVec(vector<string> v) {
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
// END TESTING FUNCTION



int main()
{
    printVec(fizzBuzz(3));
    printVec(fizzBuzz(5));
    printVec(fizzBuzz(15));
    printVec(fizzBuzz(25));
    printVec(fizzBuzz(30));
    printVec(fizzBuzz(17));

}
