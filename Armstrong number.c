#include<stdio.h>
void main()
{
printf("The following program is to check whether the given number is a Armstrong number or not :-\n\n");//armstrong number example 371
int num,sum=0,x,temp;
printf("Enter a number to find whether it is Armstrong  number or not :- ");
scanf("%d",&num);
temp=num;//to keep the original number as a backup as we will be using it later in this program
while(num>0)//The loop will work until the number is 0
{
  x=num%10;//modulus operator is used as it returns the remainder(The last digit)
  sum=sum+x*x*x;
  num=num/10;//to get the remaining number
}
num=temp;//since the original number has become 0,the temp number is used
if(sum==temp)//if the reversed number is equivalent to the original number than it is a palindrome number else not
  {
   printf("\n-----It is a Armstrong number-----");
 }
 else
 {
   printf("-----It is not a Armstrong number-----");
 }
}
