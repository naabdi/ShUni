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
#include <string>
using namespace std;

int main () {
   string str1{"Hello"};
   string str2{"Students"};
   string str3;

   cout << "String #1: " << str1 << endl;
   cout << "String #2: " << str2 << endl;
   cout << "String #1 + String #2: " << str1 + str2 << endl;
   cout << "Size of string #1: " << str1.size() << endl;
   cout << "2th element of string #1: " << str1[1] << endl;

   str3 = str1;
   cout << "String #3: " << str3 << endl;

   int var1 = 728;

   cout << str1 + to_string(var1) <<endl;

   return 0;
}


