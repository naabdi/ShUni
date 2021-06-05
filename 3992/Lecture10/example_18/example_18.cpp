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
void MatTranspose(array<array<int, columns>, rows>&,
                  array<array<int, columns>, rows>&);
void printArray(array<array<int, columns>, rows>&);
int main ()
{
   array<array<int, columns>, rows> array1{1,2,3,4};
   array<array<int, columns>, rows> array2{};
   MatTranspose(array1,array2);
   cout << "Matrix A is" << endl;
   printArray(array1);

   cout << "Transpose of Matrix A is" << endl;
   printArray(array2);
   return 0;
}

void MatTranspose(array<array<int, columns>, rows>& arrInp,
                  array<array<int, columns>, rows>& arrOut)
{
    for (size_t row{0}; row < arrInp.size(); ++row) {
    for (size_t column{0}; column < arrInp[row].size(); ++column)
        {
            arrOut[column][row] = arrInp[row][column];
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


