// Acept number from users and find its non factors additions

/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 4+5=9
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.Declare a variable  iCnt iAns
    3.read number from user as No
    4.set  iCnt=1
    5.reapit until iCnt<=iNo
       if iNo%iCnt==0
            iAns=iAns+iCnt;
      iCnt++;
    6.Display Non Factors additions iAns
    7.END
*/
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    NonFactorsAdd
//  Description :       it Return non  Factors Additions   of that numbers less than numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int NonFactorsAdd(int iNo)
{
  int iCnt = 0, iAns = 0;
  for (iCnt = 1; iCnt < iNo; iCnt++)
  {

    if (iNo % iCnt != 0)
    {
      iAns = iAns + iCnt;
    }
  }

  return iAns;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
  int iValue = 0, iRet = 0;
  printf("Enter the Numbers: ");
  scanf("%d", &iValue);
  iRet = NonFactorsAdd(iValue);
  printf("Addition of non factors are:%d", iRet);
  return 0;
}
//////////////////////////////////////////
// Input : 6                         ////
// output:4+5=9                     ////
///////////////////////////////////////