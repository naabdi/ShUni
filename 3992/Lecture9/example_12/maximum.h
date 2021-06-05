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
template <typename T>  // or template<class T>
T maximum(T value1, T value2, T value3) {
   T maximumValue{value1}; // assume value1 is maximum

   // determine whether value2 is greater than maximumValue
   if (value2 > maximumValue) {
      maximumValue = value2;
   }

   // determine whether value3 is greater than maximumValue
   if (value3 > maximumValue) {
      maximumValue = value3;
   }

   return maximumValue;
}
