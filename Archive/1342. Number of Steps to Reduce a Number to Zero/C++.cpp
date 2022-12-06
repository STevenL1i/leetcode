#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    int index = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
            num /= 2;
        else
            num--;

        index++;
    }
    return index;
}


int main()
{
    cout << numberOfSteps(14) << endl;
    cout << numberOfSteps(8) << endl;
    cout << numberOfSteps(123) << endl;
}