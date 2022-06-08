#include <bits/stdc++.h>
using namespace std;

// passing reference itself of matrix
void setZeroes(vector<vector<int>> &matrix)
{

    int firstCol = 1, rows = matrix.size(), cols = matrix[0].size();
    
    //here we starting from 0 
    for (int i = 0; i < rows; i++)
    {
        // checking if 0 is present in the 0th column or not
        if (matrix[i][0] == 0) firstCol = 0;

        //here we starting from 1 not zero
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    /*traversing in the reverse direction (dry run with starting from start) and
     checking if the row or col has 0 or not
     and setting values of matrix 0 accordingly.*/
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        if (firstCol == 0)
        {
            matrix[i][0] = 0;
        }
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