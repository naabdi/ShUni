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
* Lecture 9      *
* Date:1400/03/13*
******************
*/
#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long); // function prototype

int main() {
   // calculate the fibonacci values of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter)
      cout << "fibonacci(" << counter << ") = "
         << fibonacci(counter) << endl;

   // display higher fibonacci values
   cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
   cout << "fibonacci(30) = " << fibonacci(30) << endl;
   cout << "fibonacci(35) = " << fibonacci(35) << endl;
}

// recursive function fibonacci
unsigned long fibonacci(unsigned long number) {
   if ((0 == number) || (1 == number)) { // base cases
      return number;
   }
   else { // recursion step
      return fibonacci(number - 1) + fibonacci(number - 2);
   }
}
