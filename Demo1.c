#include<stdio.h>

int Division(int iNo1,int iNo2)
{
  int iAns=0;
  
  iAns=iNo1/iNo2;
  
  return iAns=0;
}

int main()
{
  int iValue1=0, iValue2=0;
  int iRet=0;
  printf("Enter the first number\n");
  scanf("%d",&iValue1);
  
  printf("Enter the second number\n");
  scanf("%d",&iValue2);
  
  iRet=Division(iValue1,iValue2);
  printf("Division of two numbers is:%d",iRet);
  
  return 0;
}
 
