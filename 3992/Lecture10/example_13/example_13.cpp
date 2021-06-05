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
const size_t columns{3};
void ArrSum(array<array<int, columns>, rows>&,
            array<array<int, columns>, rows>&,
            array<array<int, columns>, rows>&);
void printArray(array<array<int, columns>, rows>&);
int main ()
{
   array<array<int, columns>, rows> array1{1,2,3,4,5,6};
   array<array<int, columns>, rows> array2{7,8,9,10,11,12};
   array<array<int, columns>, rows> array3{};
   ArrSum(array1,array2,array3);
   cout << "Matrix A is" << endl;
   printArray(array1);
   cout << "Matrix B is" << endl;
   printArray(array2);
   cout << "Matrix A + B is" << endl;
   printArray(array3);
   return 0;
}

void ArrSum(array<array<int, columns>, rows>& arrInp1,
            array<array<int, columns>, rows>& arrInp2,
            array<array<int, columns>, rows>& arrOut)
{
    for (size_t row{0}; row < arrInp1.size(); ++row) {
    for (size_t column{0}; column < arrInp1[row].size(); ++column) {
        arrOut[row][column] = arrInp1[row][column] + arrInp2[row][column];
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


