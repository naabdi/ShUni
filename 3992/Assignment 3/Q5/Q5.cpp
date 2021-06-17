/*
******************************
* Author: Nariman Abdi       *
* https://github.com/naabdi  *
* University of Isfahan      *
* Computer Programming Course*
******************************
*/
/*
********************************************************
* Assignments 3 problem 3 solution                     *
* Date:6/17/2021                                       *
********************************************************
*/
#include "iostream"
#include "cmath"
#include "tempconv.h"
#include "iomanip"
using namespace std;


int main()
{
  double temp;
  cout << "Enter temperature in celsius: ";
  cin >> temp;
  cout << "Converted temperature in fahrenheit = " << setprecision(4) << C2F(temp) << char(248) << "F" << endl;

  cout << "Enter temperature in fahrenheit: ";
  cin >> temp;
  cout << "Converted temperature in celsius = " << setprecision(4) << F2C(temp) << char(248) << "C" << endl;
}
