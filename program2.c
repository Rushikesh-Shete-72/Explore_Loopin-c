// 2. Write a program which return the addition of n numbers
// Input:2 3 2 3 2 4 
// Output: 16 (it is additions )
//////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.then Find its Additions
    4.Display it
    5.END
*/
//     ---------------    ----------------- 

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     sum
//  Description :       it returns addition of n^th numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int sum()
{
 int iSum = 0;
int  iCnt = 0;
 for (iCnt = 1; iCnt <= 5;iCnt++)
 {
  iSum = iSum + iCnt;
  return iSum;
 }
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iRet = 0;
 iRet = sum();
 printf("Sumation=");

 return 0;

}
/////////////////////////////////////////////
//  Result                           ///////
// Input: 2 4 1 2 4 6 8 1 2         ///////
// Output:   30                    ///////
/////////////////////////////////////////
