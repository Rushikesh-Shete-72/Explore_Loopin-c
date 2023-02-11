// Accept the numbare from user and find it is a parfect number or not 
// Input:6
// Output: it is a parfect numbare (6  (1+2+3) 
//////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm ----------------- 

/*
    1.START
    2.Accept number from user  as no
    3.pass the no as parameters to the server functions
    4.Find the number is perfect or not 
    5.Display the  output
    6.END
*/
//     ---------------    ----------------- 
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    FactorsAdd
//  Description :       it Display Factors of the  numbers
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
 //////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    Chkperfect
//  Description :       it returns the boolean value
//  Input :             Integer
//  Output :            boolean
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
bool ChkPerfect(int iNo)
{
      int iRet = 0;
      iRet = FActorsAdd(iNo);
      if (iRet==iNo)
      {
           return true;
      }
      else
           return false;
}

////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
      int iValue = 0;
      bool bRet = 0;
      printf("\nEnter your numbers:");
      scanf("%d", &iValue);
      bRet = ChkPerfect(iValue);
      if(bRet==true)
      {
           printf("Number is perfect");
      }
      else
           printf("Number is not perfect"); 
          
     
      return 0;
}
/////////////////////////////////////////////////
//  Result                                //////
// Input:    6                           ///////
// Output:  number is perfect 6 (1+2+3) ///////             
//////////////////////////////////////////////
