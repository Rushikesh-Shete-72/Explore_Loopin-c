//Acept the numbers from the users and Display it'sMinimum Digits of that  numbers 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 46785
// output :8
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig=0, iMin=0
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         if(iMin>iDig)
            iMin=iDig
         iNo=iNo/10;
         5.Display the Minimum digits is iTemp
    5.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplaymaxDig
//  Description :       it Display  the maximum Digits of that numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int DisplayminDig(int iNo)
{
    int  iDigit = 0,iMin = 0; 

 if (iNo<0) //Updater
 {
  iNo = -iNo;
 }
 

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iMin>iDigit)
        {
         iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
    int iValue = 0,iRet;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    iRet=DisplayminDig(iValue);
    printf("The Minimum digits of that  number is:%d", iRet);

    return 0;
}
//////////////////////////////////////////
// Input : 12                        ////
// output:  1                       ////
///////////////////////////////////////

