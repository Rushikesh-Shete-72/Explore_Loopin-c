// Acept the numbers from  the users and display its Even Factors
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 4+5=9
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig iSum
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         iSum=iSum+iDig;
         iNo=iNo/10;
     5.Display Addition oof digit is iSum
    7.END
*/
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    SumDig
//  Description :       it Return Sum of dig   of that numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int SumDig(int iNo)
{
 int iDig = 0, iSum = 0;
 if(iNo==0) //Filter
 {
  return 1;
 }
 if (iNo<10) //Updater
 {
  iNo = -iNo;
 }
 while(iNo!=0)
 {
  /*
  iSum = iSum + (iNo % 10);  optimized code use 
  iNo /= 10;
  */

 //rutine code
  iDig = iNo % 10; 
  iSum = iSum + iDig;
  iNo = iNo / 10;
 }
 return iSum;
}

////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
  int iValue = 0, iRet = 0;
 printf("Enter the numbers: \n");
 scanf("%d" ,&iValue);
 iRet = SumDig(iValue);
 printf("The sum of Digits of the Nubers is: %d", iRet);
 return 0;
}
//////////////////////////////////////////
// Input : 12                         ////
// output:   2                       ////
///////////////////////////////////////
