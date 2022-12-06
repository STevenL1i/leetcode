#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
{
    for (int i=0; i < mat.size(); i++)
        mat[i].push_back(i);

    sort(mat.begin(), mat.end());

    vector<int> output;
    for (int i=0; i < k; i++)
        output.push_back(mat[i].back());

    return output;
}

void printVec(vector<int> vec)
{
    for (int i=0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}


int main()
{
    vector<vector<int>> mat;
    int k;
    vector<int> result;

    mat = {{1,1,0,0,0},
           {1,1,1,1,0},
           {1,0,0,0,0},
           {1,1,0,0,0},
           {1,1,1,1,1}};
    k = 3;
    result = kWeakestRows(mat, k);
    printVec(result);
    
    mat = {{1,0,0,0},
           {1,1,1,1},
           {1,0,0,0},
           {1,0,0,0}};
    k = 2;
    result = kWeakestRows(mat, k);
    printVec(result);


}