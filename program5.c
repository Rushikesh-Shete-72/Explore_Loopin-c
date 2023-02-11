// Accept the numbare from user and find its additions of the  factor
// Input:6
// Output: 6  (1+2+3)
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.pass the no as parameters to the server functions
    4.Find the factors  of that no
    5.Add that factors
    5.Display the  Additions of the factor
    6.END
*/
//     ---------------    ----------------- 
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   FactorsAdd
//  Description :       it givve  Factors additions  of the  numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int FActorsAdd(int iNo)
{
   int iCnt = 0,iSum=0;
      for (iCnt = 1; iCnt <= iNo / 2;iCnt++)
      {
            if (iNo%iCnt==0)
            {
             iSum = iSum + iCnt;
           }
      }
      return iSum;
 }
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0,iRet=0;
 printf("\nEnter your numbers:");
 scanf("%d",&iValue);
 iRet=FActorsAdd(iValue);
 printf("Additions of the Factor are:%d", iRet);
 return 0;
}
/////////////////////////////////////////////
//  Result                           ///////
// Input:    6                      ///////
// Output:  6 (1+2+3)              ///////
/////////////////////////////////////////
