#include<stdio.h>
 int transact(int pin,int new_pin){
                    printf("\n KINDLY INPUT YOUR CURRENT PIN : ");
                 scanf("%d",&pin);
                 sleep(3);
          while(pin!=2410){
                if(pin == 2410){
                printf("SUCCESSFUL!!!");
            }else{
                 printf("INVALID PIN!!!");
            }
            } 
               
              while(new_pin < 1000 || new_pin > 9999){
                      printf("\n KINDLY INPUT A NEW PIN : ");
                     scanf("%d",&new_pin);
                     sleep(3);
               if(new_pin > 1000 && new_pin < 9999){
                   printf("PIN HAS BEEN SUCCESSFULLY CHANGED");
                   sleep(2);
                        printf("\n DEAR CUSTOMER YOUR NEW PIN IS %d",new_pin);
                        
               }
               else{
                   printf("INPUT A VALID FOUR DIGIT PIN");
               }
              }
           return(new_pin);

         
 }


 