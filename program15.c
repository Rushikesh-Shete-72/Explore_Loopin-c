// Acept the numbers from  the users and display its Numbers of digits
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 1
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.acept the number from users and stored its into a variable No
    3.Declare the  iDig  as a counter variable
    4. Repeat until iNo!=0
         iNo = iNo / 10;
         iCnt++;
    5.Display the iDig  as a Digits of given numbers
    7.END
*/
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    CountDig
//  Description :       it Return numbers of   Digits   of that numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountDig(int iNo)
{
 int iDig = 0,iCnt=0;
 
    if(iNo == 0)    // Filter
    {
        return 1;
    }

   if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

 while (iNo!=0)
 {
    iNo = iNo / 10;
        iCnt++;
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
 iRet = CountDig(iValue);
 printf("The Digits of the Nubers is: %d", iRet);
 return 0;
}
//////////////////////////////////////////
// Input : 6                         ////
// output: 1                        ////
///////////////////////////////////////