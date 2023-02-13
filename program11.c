// Acept the numbeers from the users and display it's Factorials
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : Display  6*5*4*3*2*1 
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.Declare a variable  iCnt
    3.read number from user as No
    4.set  iCnt=1
    5.reapit until iCnt<=iNo
           printf iCnt*;
           iCnt++;
    6.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayFactorial
//  Description :       it Display The Factorial of that numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayFactorial(int iNo)
{
 int  iCnt = 0;
 for (iCnt=1; iCnt>iNo; iCnt++)
 {
  printf("%d*", iCnt);
}
return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("Enter your numbers: \n");
 scanf("%d", &iValue);
DisplayFactorial(iValue);

 return 0;
}
//////////////////////////////////////////
// Input :6                          ////
// output:1*2*3*4*5*6               //// 
///////////////////////////////////////