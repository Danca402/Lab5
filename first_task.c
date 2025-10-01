/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)! 

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/
#include <stdio.h>
#include <math.h>
float cube(float x)//<-- Function header, input parameters and output type in this form oType NAME(iType1 iName1,iType2 iName2,...)
{//here starts what to do
  float a = x*x*x;
//reurn with the result of the function (if any)
  return a;
}//that closes the function

/*Write the other functions here:*/
float absolu(float y){
  if(y<0){
    y=-y;
  }
  return y;
}

int main() //main is a function!
{
  for(float i=-1.0; i<=1.0001; i+=0.1){
    printf("%.4f\t%.4f\t%.4f\t%.4f\n",i,cube(i),absolu(i),sin(i));
  }
//call the functions in a loop to print the results in the required manner

  return 0; //it returns an integer (as promised in the header) which is 0 for now!
}
