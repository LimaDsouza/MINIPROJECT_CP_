#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
    int lett,charactersss,numbers;
    char password[20],pass[20],word[20];
    char number[]="0123456789";
    char letters[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
   
    char characterss[]="!@#$^&*()_+";
  
    printf("enter the number of letters you need");
    scanf("%d",&lett);
     printf("enter the number of charcters you need");
    scanf("%d",&charactersss);
     printf("enter the number of numbers you need");
    scanf("%d",&numbers);
   srand((unsigned int)(time(NULL)));


    for (int j = 0; j < lett; j++) {
        int randomIndex = rand() % 51; 
       password[j]= letters[randomIndex];
    }


    for (int j = 0; j < charactersss; j++) {
        int randomIndex = rand() % 10;
       pass[j]=characterss[randomIndex];
    }

    
    for (int j = 0; j < numbers; j++) {
        int randomIndex = rand() % 11;
       word[j]= number[randomIndex];
    }
printf("the password is %s%s%s",password,pass,word);
    printf("\n");
    return 0;
}
