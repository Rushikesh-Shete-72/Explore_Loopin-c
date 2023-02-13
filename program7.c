// Acccept one number from users and display its non factor numbers Less than that numbers
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 4 5
/////////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm -----------------

/*
    1.START
    2.Acceept the numbers
    3.declare a counter - int cnt=1;
    3. divide numbersby counter  & chek the remminder of that numbers up to the nhuber is less than that numbers
    4.check remminder is zero or not
    5.if remminder is zero not zero
          Display then the number is non factor
    6.else
       continue    
    8.END
*/
//     ---------------    -----------------
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DisplayNonFactors
//  Description :       it Display The non factors value of numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayNonFactors(int iNo)
{
 int iCnt = 0;
 printf("\nNon factors of the numbers: \t");
 for (iCnt = 1; iCnt <= iNo; iCnt++)
 {
    if ((iNo%iCnt)!=0)
    {
     printf("%d\t", iCnt);
    }
 }
 return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("\nEnter Your numbers:");
 scanf("%d", &iValue);
 DisplayNonFactors(iValue);
 return 0;
}
////////////////////////////////////////
// Input :6                       /////
// output :4 5                    /////
//////////////////////////////////////