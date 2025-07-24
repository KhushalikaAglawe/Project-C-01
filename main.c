#include <stdio.h>
#include <stdlib.h>

int main()
{  int c=1;
   int choice,gtot=0,plate1,plate2,plate3,stot=0,dtot=0,ttot=0,flag;

    printf("WELCOME TO RISESUN HOTEL...\n");
    while(c>0)
    {
 printf("\nMenu:\n");
 printf("1 Samosa 20/-\n");
 printf("2 Dosa   30/-\n");
 printf("3 Tea    10/-\n");
 printf("0 Exit\n\n");
 printf("Enter your choice :");
 scanf("%d",&choice);


    switch(choice)
    {
    case 1:
    printf("Enter the no of plate:");
    scanf("%d",&plate1);
    printf("\n\n");
    stot=plate1*20;
    printf("\nTotal of samosa is : %d \n",stot);
    gtot+=stot;
    break;

    case 2:
    printf("Enter the no of plate:");
    scanf("%d",&plate2);
     printf("\n\n");
    dtot=plate2*30;
    printf("\nTotal of dosa is : %d \n",dtot);
    gtot+=dtot;
    break;
    case 3:
    printf("Enter the no of plate:");
    scanf("%d",&plate3);
    printf("\n\n");
    ttot=plate3*10;
    printf("\nTotal of tea is : %d\n",ttot);
    gtot+=ttot;
    break;

    case 0:

     printf ("BILL !!\n\n");
    printf ("Sr.no\t| Product \t| Price \n");
    printf ("---------------------------\n");
    if(stot!=0){
    printf ("1    \t| Samosa  \t| %d    \n",stot);
    flag=1;}
    if(gtot!=0){
    printf ("2    \t| Dosa    \t| %d    \n",dtot);
    flag=1;}
    if(ttot!=0){
    printf ("3    \t| Tea     \t| %d    \n",ttot);
    flag=1;}
    if(flag==0)
    {
    printf ("Empty\n");
    c=0;
    }
    printf ("---------------------------\n");
    printf ("     \t|         \t| %d    \n\n",gtot);
    printf("\n\n T H A N K  Y O U FOR VISITING !....\n");
    c=0;
    break;

    default:
    printf("DO NOT EXIT....");
    break;
    }

    }
    return 0;
}

