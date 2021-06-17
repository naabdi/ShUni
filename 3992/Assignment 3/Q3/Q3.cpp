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
using namespace std;

double Edist(double , double,double , double );

int main()
{
  double x1,y1,x2,y2;
  cout << "Enter x1 and y1: ";
  cin >> x1 >> y1;
  cout << "(x1,y1) = (" << x1 << "," << y1 << ")" << endl;

  cout << "Enter x2 and y2: ";
  cin >> x2 >> y2;
  cout << "(x2,y2) = (" << x2 << "," << y2 << ")" << endl;
  cout << "distance between (" << x1 << "," << y1 << ") and (" <<
    x2 << "," << y2 << ") = " << Edist(x1,y1,x2,y2);
}

double Edist(double inp1,double inp2,double inp3,double inp4)
{
    return sqrt(pow((inp1-inp3),2)+pow((inp2-inp4),2));
}
