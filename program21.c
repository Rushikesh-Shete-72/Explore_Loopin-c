//Acept the numbers from the users and check it is palindrome or not 
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 4114
// output :it is palindrome
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.take number as input from a user and stored its in declare varianle No
    3.declare a variable iDig=0, iRev=0 ,iTemp=0;
    5.iTemp=iNo;
    4. reapet until (iNo!=0)
         iDig=iNo%10;
         iRev=(iRev*10)+iDig
         iNo=iNo/10;
    5. if(iTemp==iRev)      
         Display the number is palindrome
       else
        Display the number is  not palindrome
    5.END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   ChkPalindrome
//  Description :       it Check the Given number is palindrome or not
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void  ChkPalindrome(int iNo)
{
    int  iDigit = 0,iRev = 0,iTemp;
    iTemp = iNo;
    if (iNo < 0) // Updater
    {
     iNo = -iNo;
 }
   if(iNo<10 ||(iNo>-10 && iNo<0)) //Filter
 {
 printf("The  number %d is Palindrome number", iNo);
 }
 

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iRev =(iRev*10)+iDigit;
        iNo = iNo / 10;
    }
    if (iTemp==iRev)
    {
    printf("The  number %d is Palindrome number", iTemp);
    }
    else 
         printf("The  number %d is  not Palindrome number", iTemp);
    return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
    int iValue = 0,iRet;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    ChkPalindrome(iValue);
    return 0;
}
///////////////////////////////////////////
//input  : 4114                       ////
// output :it is palindrome          ////
////////////////////////////////////////

