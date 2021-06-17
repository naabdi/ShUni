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
* Assignments 3 problem 5 solution                     *
* Date:6/17/2021                                       *
********************************************************
*/
double C2F(double value1C) {
   double converted_value = value1C*1.8 + 32.0; // assume value1 is maximum

   return converted_value;
}

double F2C(double value2F) {
   double converted_value = (value2F - 32.0) / 1.8; // assume value1 is maximum

   return converted_value;
}
