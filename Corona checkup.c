#include<stdio.h>

int main()

{
    int ara[10];
    char c[1000];
    
    printf("******Covid-19 checkup******\n");
    
    printf("Please enter your name:\n");
    gets(c);
    
    printf("What is your age?\n");
    scanf("%d",&ara[0]);
    
    printf("Dear %s,\nDo you have fever?\nYes=0,No=1\n",c);
    scanf("%d",&ara[1]);
    
    printf("Do you have respiratory distress?\nYes=0,No=1\n");
    scanf("%d",&ara[2]);
    
    printf("Do you have cough?\nYes=0,No=1\n");
    scanf("%d",&ara[3]);
    
    printf("Have you lost taste?\nYes=0,No=1\n");
    scanf("%d",&ara[4]);
    
    if(ara[1]==0 && ara[2]==0 && ara[3]==0 && ara[4]==0)
    {
        printf("Dear %s,\nYou should go to the clinic and test your blood.\n ",c);
        
    }
    
    else {
        
        printf("Dear %s,If you feel very sick,Go to the clinic.\n",c);
   }
   
   printf("According to who and icmr,");
   
   if(ara[0]>=0 && ara[0]<=9){
   
      printf("\nIn your age fatality rate of corona virus is 0.00%");
   }
   
   else if(ara[0]>=10 && ara[0]<=19){
      printf("\nIn your age fatality rate of corona virus is 0.2%");
      
   }
   
   else if(ara[0]>=20 && ara[0]<=29){
      printf("\nIn your age fatality rate of corona virus is 0.2%");
      }
      
   else if(ara[0]>=30 && ara[0]<= 39){
     printf("\nIn your age fatality rate of corona virus is 0.2%");
      
   }
   
   else if(ara[0]>=40 && ara[0]<=49){
     printf("\nIn your age fatality rate of corona virus is 0.4%");
     
      
   }
   
   else if(ara[0]>=50 && ara[0]<=59){
     printf("\nIn your age fatality rate of corona virus is 1.3%");
      
   }
   
   else if(ara[0]>=60 && ara[0]<=69){
     printf("\nIn your age fatality rate of corona virus is 3.6%");
      
   }
   
   else if(ara[0]>=70 && ara[0]<=79){
     printf("\nIn your age fatality rate of corona virus is 8.0%");
      
   }
   
   else if(ara[0]>=80){
     printf("\nIn your age fatality rate of corona virus is 21.8% or 14.8%");
      
   }
   
   printf("\n\n\nImportant tips to prevent it:\n1)Stay at home\n2)Use mask\n3)Wash your hands with soap\n");
   printf("\n\n\n Download aarogya setu app for more references\n\n");
   printf("\n\n\n Also refer-- WHO\n\n");
   printf("Hope you like this simple project.\n");
   printf("Thank you.... Made by Rishabh");
   
   
   }