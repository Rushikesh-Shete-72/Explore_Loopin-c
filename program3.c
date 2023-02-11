// 2. Write a program which  accept numbers from users and return it's Factorial numbers
// Input:5
// Output: iAns=1*2*3*4
//////////////////////////////////////////////////////////////////////////////////////////


 //     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.pass the no as parameters to the server functions
    4.Find the factorial  of the no
    5. return the factorial to the client functions
    6.Display the factorial
    7.END
*/
//     ---------------    ----------------- 

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Factorial
//  Description :       it returns factorials of the  numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


int Factorial(int iNo)
{
 int iFact = 1;
 int iCnt = 0;
 for (iCnt = 1; iCnt <= iNo;iCnt++)
 {
  iFact = iFact * iCnt;
 }
 return iFact;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iRet = 0;
 int iValue = 0;
 printf("Enter the number= \n");
 scanf("%d", &iValue);
 iRet = Factorial(iValue);
 printf("Factorial of %d is %d\n", iValue, iRet);
 return 0;
}
/////////////////////////////////////////////
//  Result                           ///////
// Input:    5                      ///////
// Output:   24=1*2*3*4            ///////
/////////////////////////////////////////