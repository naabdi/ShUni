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
using namespace std;

int main () {
   char aChar = 'a';
   char bChar{'b'};
   cout << aChar << " ";
   cout << static_cast<int>(aChar) << " ";
   cout << static_cast<char>(aChar - 32) << " ";
   cout << aChar << bChar << endl;

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;
   int a;
   cin >> a;

   return 0;
}
