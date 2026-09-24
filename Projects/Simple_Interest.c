#include<stdio.h>
#include<conio.h>
void main()
{
//Tell What your Program Does.
  printf("Simple Interest Calculator.\n");
// Declare principle , Rate of intrest &  Time.
 int p,r,t;
//Tell the user to input values.
 printf("Enter Principal,Rate & Time ");
//Take input from the user.
 scanf("%d%d%d",&p,&r,&t);
//Use logic and print out the answer.
 printf(" Value of Simple Intrest is = %f",(p*r*t)/100.0);
}
