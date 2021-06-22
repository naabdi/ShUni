/*
***********************************************
* Author: Nariman Abdi                        *
* https://github.com/naabdi                   *
* University of Isfahan (Shahreza Branch)     *
* Computer Programming Course                 *
***********************************************
*/
/*
******************
* Assignment 4   *
* Date:1400/04/01*
******************
*/
#include "iostream"
#include "vector"
#include "ctime"
using namespace std;

void PrintVec2D(vector<vector<double>>&);
double Det(vector<vector<double>>&);
void MatTranspose(vector<vector<double>>&,
                  vector<vector<double>>&);
void invMat(vector<vector<double>>& ,
                  vector<vector<double>>& ,double );

int main()
{
    const size_t ROW = 3;
    const size_t COL = 3;

    vector<vector<double>> vec2d;
    vector<double> tempvec;

        for (size_t row = 0;row < ROW; row++)
        {
            for (size_t col = 0; col < COL; col++)
            {
                int temp;
                cout << "Enter matrix[" << row << "][" << col << "]"<<endl;
                cin >> temp;
                tempvec.push_back(temp);
            }

            vec2d.push_back(tempvec);
            tempvec.clear();

        }
    cout << "The matrix is:" << endl;
    PrintVec2D(vec2d);

    double det = Det(vec2d);
    vector<vector<double>> invvec2d = {{0,0,0},{0,0,0},{0,0,0}};
    if (det!=0)
    {
        invMat(vec2d,invvec2d,det);
        cout << "The inverted matrix is:" << endl;
        PrintVec2D(invvec2d);
    }
    else
    {
        cout << "The inverted matrix is not available:" << endl;
    }


}

void PrintVec2D(vector<vector<double>>& inpvec2d)
{
    for (vector<double> r:inpvec2d)
    {
        for (double c:r)
            cout << c << " ";
        cout << endl;
    }
}

double Det(vector<vector<double>>& inpvec2d)
{
    double det = 0;
    det += inpvec2d[0][0]*(inpvec2d[1][1]*inpvec2d[2][2] - inpvec2d[1][2]*inpvec2d[2][1]);
    det -= inpvec2d[0][1]*(inpvec2d[1][0]*inpvec2d[2][2] - inpvec2d[1][2]*inpvec2d[2][0]);
    det += inpvec2d[0][2]*(inpvec2d[1][0]*inpvec2d[2][1] - inpvec2d[1][1]*inpvec2d[2][0]);

    return det;
}

void MatTranspose(vector<vector<double>>& arrInp,
                  vector<vector<double>>& arrOut)
{
    for (size_t row{0}; row < arrInp.size(); ++row) {
    for (size_t column{0}; column < arrInp[row].size(); ++column)
        {
            arrOut[column][row] = arrInp[row][column];
        }
    }
}

void invMat(vector<vector<double>>& arrInp,
                  vector<vector<double>>& arrOut,double detval)
{
    vector<vector<double>> tvec2d = {{0,0,0},{0,0,0},{0,0,0}};
    vector<vector<double>> adjvec2d = {{0,0,0},{0,0,0},{0,0,0}};
    tvec2d[0][0] = arrInp[1][1]*arrInp[2][2] - arrInp[1][2]*arrInp[2][1];
    tvec2d[0][1] = -(arrInp[1][0]*arrInp[2][2] - arrInp[1][2]*arrInp[2][0]);
    tvec2d[0][2] = arrInp[1][0]*arrInp[2][1] - arrInp[1][1]*arrInp[2][0];
    tvec2d[1][0] = -(arrInp[0][1]*arrInp[2][2] - arrInp[0][2]*arrInp[2][1]);
    tvec2d[1][1] = arrInp[0][0]*arrInp[2][2] - arrInp[0][2]*arrInp[2][0];
    tvec2d[1][2] = -(arrInp[0][0]*arrInp[2][1] - arrInp[0][1]*arrInp[2][0]);
    tvec2d[2][0] = arrInp[0][1]*arrInp[1][2] - arrInp[0][2]*arrInp[1][1];
    tvec2d[2][1] = -(arrInp[0][0]*arrInp[1][2] - arrInp[0][2]*arrInp[1][0]);
    tvec2d[2][2] = arrInp[0][0]*arrInp[1][1] - arrInp[0][1]*arrInp[1][0];
    MatTranspose(tvec2d,adjvec2d);
    for (size_t row{0}; row < tvec2d.size(); ++row) {
    for (size_t column{0}; column < tvec2d[row].size(); ++column)
        {
            arrOut[row][column] = adjvec2d[row][column]/detval;
        }
    }
}
