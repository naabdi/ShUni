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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVec(vector<int>&);

int main()
{
    //you can use array instead of vector
    long long int stuNum = 9852367412;

    vector<int> vec;

    int rem;
    for (int i = 1; i<=10;i++)
    {
        rem = stuNum%10;
        stuNum /= 10;
        vec.push_back(rem);
    }
    cout << "The vector of student number is:" << endl;
    PrintVec(vec);
    cout << endl;
    cout << "The sorted vector of student number is:" << endl;
    sort(vec.begin(),vec.end());
    PrintVec(vec);


}

void PrintVec(vector<int>& inpvec2d)
{
    for (int r:inpvec2d)
    {
        cout << r << " ";
    }
}
