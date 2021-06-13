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
* Lecture 10     *
* Date:1400/03/13*
******************
*/
#include "iostream"
#include "vector"
#include "ctime"
using namespace std;

void PrintVec2D(vector<vector<int>>&);

int main()
{
    const size_t ROW = 5;
    const size_t COL = 7;
    srand(static_cast<int>(time(0)));
    vector<vector<int>> vec2d;
    vector<int> tempvec;
    cout << "the vector " <<
        (vec2d.empty() ? "is empty":"is not empty") << endl;

        for (size_t row = 0;row < ROW; row++)
        {
            for (size_t col = 0; col < COL; col++)
                tempvec.push_back(rand()%10);
            vec2d.push_back(tempvec);
            tempvec.clear();

        }
    PrintVec2D(vec2d);

}

void PrintVec2D(vector<vector<int>>& inpvec2d)
{
    cout << "The vector is:" << endl;
    for (vector<int> r:inpvec2d)
    {
        for (int c:r)
            cout << c << " ";
        cout << endl;
    }
}
