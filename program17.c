// Acept the numbers from  the users and display its Even Digits numbers count 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 4676
// output : 3
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig iCnt
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         if(iDig%2==0)
             iCnt++;
         iNo=iNo/10;
     5.Display Even Digits of that  numbers
    7.END
*/
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountEvenDig
//  Description :       it ReturnCount of even  dig   of that numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountEvenDig(int iNo)
{
 int iDig = 0, iCnt = 0;
 if(iNo==0 || iNo==1) //Filter
 {
  return 0;
 }
 if (iNo<00) //Updater
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
   if (iDig%2==0)
   {
    iCnt++;
   }
   
  iNo = iNo / 10;
 }
 return iCnt;
}

////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
  int iValue = 0, iRet = 0;
 printf("Enter the numbers: \n");
 scanf("%d" ,&iValue);
 iRet = CountEvenDig(iValue);
 printf("The Count  of even  Digits of the Nubers is: %d", iRet);
 return 0;
}
//////////////////////////////////////////
// Input : 12                         ////
// output:   1                       ////
///////////////////////////////////////
