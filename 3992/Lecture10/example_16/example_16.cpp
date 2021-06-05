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
#include <ctime>
using namespace std;
const size_t rows{10};
const size_t columns{10};
void RandArr(array<array<int, columns>, rows>&);
void printArray(array<array<int, columns>, rows>&);
int main ()
{
   array<array<int, columns>, rows> array1{};
   RandArr(array1);
   printArray(array1);


   return 0;
}

void RandArr(array<array<int, columns>, rows>& arrInp2)
{
    srand(static_cast<int>(time(0)));
    for (size_t row{0}; row < arrInp2.size(); ++row) {
    for (size_t column{0}; column < arrInp2[row].size(); ++column) {
        arrInp2[row][column] = 1 + rand()%6;
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


