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
#include <iostream>
#include <array>
using namespace std;
const size_t rows{2};
const size_t columns{2};
void GetMat(array<array<int, columns>, rows>&);
void printArray(array<array<int, columns>, rows>&);
int main ()
{
   array<array<int, columns>, rows> array1{};
   GetMat(array1);
   cout << "Matrix A is" << endl;
   printArray(array1);
   return 0;
}

void GetMat(array<array<int, columns>, rows>& arrInp)
{
    for (size_t row{0}; row < arrInp.size(); ++row) {
    for (size_t column{0}; column < arrInp[row].size(); ++column)
        {
            cout << "Enter Matrix[" << row << "][" <<
            column << "] then press ENTER"<< endl;
            cin >> arrInp[row][column];
        }
    }
}

void printArray(array<array<int, columns>, rows>& arrInp) {
   // loop through array's rows
   for (size_t row{0}; row < arrInp.size(); ++row) {
    for (size_t column{0}; column < arrInp[row].size(); ++column) {
        cout << arrInp[row][column] << ' ';
        }
    cout << endl;
    }
}


