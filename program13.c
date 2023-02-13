// Acept the numbers from  the users and display its Even Factors
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 4+5=9
/////////////////////////////////////////////////////////////////////////////////////////////
//     ----------------- Algorithm -----------------

/*
    1.START
    2.Read a  numbers input from users & store its in to variable as No
    3.Declare a variable iCnt  & initalise its 1
    3.repeat until iCnt< No
         if(No%iCnt==0)
            Display iCnt;
         else
             continue;
         iCnt++;
     4stop the loop    
     7.END
*/
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    DisplayEvenFactors
//  Description :       it Return non  Factors  of that numbers less than numbers
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayEvenFactors(int iNo)
{
 int icnt = 0;
 while (icnt<iNo)
 {
  if (iNo%icnt==0)
  {
   printf("%d\t", icnt);
  }
  else
     continue;
  icnt++;
 }
 return;
}


////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("Enter the numbers:\n");
 scanf("%d", &iValue);
 DisplayEvenFactors(iValue);
 return 0;
}
//////////////////////////////////////////
// Input : 6                         ////
// output:2                          ////
///////////////////////////////////////