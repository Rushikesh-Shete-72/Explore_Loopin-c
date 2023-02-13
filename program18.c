// Acept the numbers from  the users and display its Even Digits numbers and odd digits numbers count
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 4676
// output : odd Digits 1 Even Digits 3
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig, EveniCnt and OddiCnt
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         if(iDig%2==0)
             EveniCnt++;
         else
             OddiCnt++;
         iNo=iNo/10;
     5.Display Even Digits of that  numbers and odd  Digits of that  numbers
    6.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayCountOfEvenOddDigits
//  Description :       it Display    even  dig   of that numbers   and odd Digits of that numbers  count
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayCountOfEvenOddDigits(int iNo)
{
    int iEvenCnt = 0, iDigit = 0,iOddCnt = 0; 

 if(iNo==0 ) //Filter
 {
  printf("Number of even digits are : 1\n");
  printf("Number of odd digits are : 0\n");
  return;
 }
 if (iNo<0) //Updater
 {
  iNo = -iNo;
 }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
    }
    printf("Number of even digits are : %d\n",iEvenCnt);
    printf("Number of odd digits are : %d\n",iOddCnt);
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    DisplayCountOfEvenOddDigits(iValue);
    
    return 0;
}
//////////////////////////////////////////
// Input : 124                         ////
// output:  odd 1    Even 2          ////
///////////////////////////////////////

// 08988
