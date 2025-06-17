// A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

#include <iostream>
#include <vector>
using namespace std;

int findRowPeakIndex(const vector<int> &row)
{
    int s = 0, e = row.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (s == e)
            return s;
        if (mid + 1 < row.size() && row[mid] < row[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return -1;
}

vector<int> findPeakGrid(const vector<vector<int>> &mat)
{
    int peakRow = -1, peakCol = -1;

    for (int i = 0; i < mat.size(); i++)
    {
        int colIdx = findRowPeakIndex(mat[i]);
        bool up = 0, down = 0;
        if( i - 1 >= 0 ){
            up = 1;
        }
        if( i + 1 < mat.size() ){
            down = 1;
        }
        if (peakRow == -1 || peakCol == -1)
        {
            peakRow = i;
            peakCol = colIdx;
            if (up == 1 && mat[peakRow][peakCol] < mat[peakRow - 1][peakCol])
            {
                peakRow = peakRow - 1;
            }
            if (down == 1 && mat[peakRow][peakCol] < mat[peakRow + 1][peakCol])
            {
                peakRow = peakRow + 1;
            }
        }
        else
        {
            if (mat[peakRow][peakCol] < mat[i][colIdx])
            {
                peakCol = colIdx;
                peakRow = i;
                if (up == 1 && mat[peakRow][peakCol] < mat[peakRow - 1][peakCol])
                {
                    peakRow = peakRow - 1;
                }
                if (down == 1 && mat[peakRow][peakCol] < mat[peakRow + 1][peakCol])
                {
                    peakRow = peakRow + 1;
                }
            }
        }
    }

    return {peakRow, peakCol};
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));
    cout << "Enter elements of the matrix row-wise:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<int> peak = findPeakGrid(mat);

    if (peak[0] != -1 && peak[1] != -1)
    {
        cout << "Peak found at: [" << peak[0] << ", " << peak[1] << "] with value: "
             << mat[peak[0]][peak[1]] << endl;
    }
    else
    {
        cout << "No peak found." << endl;
    }

    return 0;
}
