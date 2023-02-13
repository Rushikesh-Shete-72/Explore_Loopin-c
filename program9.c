// Acccept one number from users and display it is in revers order up to 1
/////////////////////////////////////////////////////////////////////////////////////////////
// input  : 6
// output : 6 5 4 3 2 1 
/////////////////////////////////////////////////////////////////////////////////////////////

//     ----------------- Algorithm -----------------

/*
    1.START
    2.Acceept the n^th  numbers  as no
    3.declare a counter - int cnt=No ;
    4. while iCnt is greter  than  0
    3.   printf iCnt
    4.   iCnt--;
    4.iCnt is equal to the 0 stop
    8.END
*/
//     ---------------    -----------------

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayReverse
//  Description :       it Display The reverse order numbers up to the 0 from input numbers 
//  Input :             Integer
//  Output :            Integer
//  Author :           Shete Rushikesh Gopinath
//  Date :              2/11/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayReverse(int iNo)
{
 int iCnt = iNo; // Or  while(iNo>0) { printf("\n%d\t",iNo); iCnt--;};
  printf("--------------------\n");
 while(iCnt>0)                   
 {
  printf("\n%d\t", iCnt);
  iCnt--;
 }
  printf("--------------------\n");
 return;
}
////////////////////////////////////////
// Entry point of the application /////
//////////////////////////////////////
int main()
{
 int iValue = 0;
 printf("\nEnter your Numbers: ");
 scanf("%d", &iValue);
 DisplayReverse(iValue);
 return 0;
}
//////////////////////////////////////////
// Input :6                          ////
// output:6 6 5 4 3 2 1             //// 
///////////////////////////////////////