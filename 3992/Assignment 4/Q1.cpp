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
    vector<int> vec = {18,15,20,18,17,16,14,10,
                          8,12,18,20,20,15,17,9,
                          12,15,14,13,17,16,15,9,
                          16,13,14,17,16,12,19,19,18,12,18};

    int total = 0;
    for(int item:vec)
        total += item;
    double mean;
    PrintVec(vec);
    cout <<endl;
    mean = static_cast<double>(total) / vec.size();
    cout << "Mean = " << mean << endl;

    vector<int> freq;
    //make a zero vector
    for (int i = 0; i < vec.size();i++)
        freq.push_back(0);

    for(int i = 0; i < vec.size();i++)
        ++freq[vec[i]];
    int mode{0};
    for(int i = 0; i < vec.size();i++)
        if (freq[i] > mode) (mode = vec[freq[i]]);
    cout << "Mode = " << mode << endl;

    sort(vec.begin(),vec.end());
    cout << "Median = " << vec[17] << endl;



}

void PrintVec(vector<int>& inpvec2d)
{
    cout << "The vector is:" << endl;
    for (int r:inpvec2d)
    {
        cout << r << " ";
    }
}
