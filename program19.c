// Acept the numbers from  the users and display its Even Digits numbers and odd digits numbers 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 4678
// output : odd Digits 7 Even Digits 4 6 8
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig, EveniCnt and OddiCnt
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         if(iDig%2==0)
             Display iDig is Even
         else
            Display iDig is odd
         iNo=iNo/10;
    5.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayEvenOddDigits
//  Description :       it Display    even  dig   of that numbers   and odd Digits of that numbers  
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenOddDigits(int iNo)
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
            printf("even digits are : %d\n",iDigit);

        }
        else
        {
           printf("Odd digits are : %d\n",iDigit);

        }
        iNo = iNo / 10;
    }
    return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    DisplayEvenOddDigits(iValue);
    
    return 0;
}
//////////////////////////////////////////
// Input : 12                         ////
// output:  odd 1    Even 2          ////
///////////////////////////////////////

// 08988
