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
using namespace std;

void PrintVec(vector<int>&);

int main()
{
    vector<int> vec;
    cout << "the vector " <<
        (vec.empty() ? "is empty":"is not empty") << endl;

    for (int i = 20; i >= 0; i--)
    {
        vec.push_back(i);
    }

    cout << "the vector " <<
        (vec.empty() ? "is empty":"is not empty") << endl;

    PrintVec(vec);

    int index = 5;
    cout << "vec[" << index << "] = " << vec[index] << endl;
    cout << "vector size is " << vec.size() << endl;

    cout << "vec[0] = " << vec.front() << endl;
    cout << "vec[" << vec.size() - 1 << "] = " << vec.back() << endl;

    vec.insert(vec.begin()+5,-12);
    index = 5;
    cout << "vec[" << index << "] = " << vec[index] << endl;
    PrintVec(vec);

    vec.erase(vec.begin()+5);
    PrintVec(vec);

    vec.clear();
    cout << "the vector " <<
        (vec.empty() ? "is empty":"is not empty") << endl;

    vec.assign(7,3);
    PrintVec(vec);


}

void PrintVec(vector<int>& inpvec)
{
    cout << "The vector is:" << endl;
    for (int item:inpvec)
        cout << item << " ";
    cout << endl;
}
