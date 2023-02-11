// Accept the numbare from user and find its factor
// Input:6
// Output: 1,2,3
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.pass the no as parameters to the server functions
    4.Find the factors  of that no
    5.Display the factor
    6.END
*/
//     ---------------    ----------------- 
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayFactors
//  Description :       it Display Factors of the  numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayFActors(int iNo)
{
   int iCnt = 0;
      for (iCnt = 1; iCnt <= iNo / 2;iCnt++)
      {
            if (iNo%iCnt==0)
            {
            printf("%d\t", iCnt);
           }
      }
 }
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("\nEnter your numbers:");
 scanf("%d",&iValue);
 DisplayFActors(iValue);
 return 0;
}
/////////////////////////////////////////////
//  Result                           ///////
// Input:    6                      ///////
// Output:   1,2,3                 ///////
/////////////////////////////////////////
