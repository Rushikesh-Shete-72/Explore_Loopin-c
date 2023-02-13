// Acept the numbers from users and Display its factorials 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 6*5*4*3*2*1 
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.Declare a variable  iCnt iFact
    3.read number from user as No
    4.set  iCnt=1 iFact=1
    5.reapit until iCnt<iNo
           iFact=iFact*iCnt
           iCnt++;
           iFact++;
    6.Display Factorial of that no
    6.END
*/
#include<stdio.h>

int Factorial(int iNo)
{
 int iFact =1, iCnt = 0;
 for (iCnt=iNo; iCnt>0; iCnt--)
 {
  iFact = iFact * iCnt;
 }
 

}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iRet=0,iValue = 0;
 printf("Enter your numbers: \n");
 scanf("%d", &iValue);
 iRet = Factorial(iValue);
 printf("Factorial of the %d is %d", iValue, iRet);
 return 0;
}
//////////////////////////////////////////
// Input :3                         ////
// output: 6                       //// 
///////////////////////////////////////
