#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    
    //using auxillary space
    vector<vector<int>> auxMat(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            auxMat[i][j] = matrix[i][j];
    }
    // fill rows with zeroes
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                for (int col = 0; col < n; ++col)
                    auxMat[i][col] = 0;
                break;
            }
        }
    }
    // fill columns as 0
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (matrix[j][i] == 0)
            {
                for (int row = 0; row < m; ++row)
                    auxMat[row][i] = 0;
                break;
            }
        }
    }

    // copy elements
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            matrix[i][j] = auxMat[i][j];
    }
}
int main()
{
    vector<vector<int>> vect;
    vect = {{1, 1, 2, 0}, {3, 0, 5, 2}, {1, 3, 1, 5}, {0, 0, 1, 1}};
    setZeroes(vect);
    cout << "The Final Matrix : " << endl;
    for(auto mat1d : vect)
    {
        for(auto x : mat1d)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }


}