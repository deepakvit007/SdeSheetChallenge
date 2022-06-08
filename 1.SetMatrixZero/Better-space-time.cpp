#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size(), cols = matrix[0].size();
    vector<int> auxRow(rows, -1), auxCol(cols, -1);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                auxRow[i] = 0;
                auxCol[j] = 0;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (auxRow[i] == 0 || auxCol[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> vect;
    vect = {{1, 1, 2, 0}, {3, 0, 5, 2}, {1, 3, 1, 5}, {0, 0, 1, 1}};
    setZeroes(vect);
    cout << "The Final Matrix : " << endl;
    for (auto mat1d : vect)
    {
        for (auto x : mat1d)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}