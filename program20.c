//Acept the numbers from the users and reverse these numbers 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 4678
// output :8764
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig=0, iRev=0
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         iRev=(iRev*10)+iDig
         iNo=iNo/10;
         5.Display the reverse number is iRev
    5.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayRev
//  Description :       it Revers the Given numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int  DisplayRev(int iNo)
{
    int  iDigit = 0,iRev = 0; 

 if (iNo<0) //Updater
 {
  iNo = -iNo;
 }
  if(iNo<10 ||(iNo>-10 && iNo<0)) //Filter
 {
  return iNo;
 }
 

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iRev =(iRev*10)+iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
    int iValue = 0,iRet;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    iRet=DisplayRev(iValue);
    printf("The Reverse number is:%d", iRet);

    return 0;
}
//////////////////////////////////////////
// Input : 12                         ////
// output:  21                       ////
///////////////////////////////////////

