// Acccept one number from users and display its Tables
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 6 12 18 24 30 36 42 48 54 60 
/////////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm -----------------

/*
    1.START
    2.Acceept the n^th  numbers  as no
    3.declare a counter - int cnt=1 ;  int itemp;
    4. while iCnt is less than equal to 10
    3.   printf itemp=iCnt*no
    4.iCnt is greatern than 10 stop 
    8.END
*/
//     ---------------    -----------------

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DisplayNonFactors
//  Description :       it Display The Table of the input numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayTable(int iNo)
{
 int iCnt = 0,iAns=0;
 while (iCnt<=10)
 {
  iAns = iNo * iCnt;
  printf("%d", iAns);
  iCnt++;
 }
 return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("\nEnter your Numbers: ");
 scanf("%d", &iValue);
 DisplayTable(iValue);
 return 0;
}
//////////////////////////////////////////
// Input :6                            //
// output:6 12 18 24 30 36 42 48 54 60// 
///////////////////////////////////////