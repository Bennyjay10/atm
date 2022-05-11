#include<stdio.h>
#include<unistd.h>
int main(){
    int pin;
    int new_pin;
while(pin!=2410){
                 printf("\n KINDLY INPUT YOUR CURRENT PIN : ");
                 scanf("%d",&pin);
                 
            if(pin == 2410){
                
                printf("SUCCESSFUL...");
            }else{
                 printf("INVALID PIN!!!");
            }
               }
              
              while(new_pin < 1000 || new_pin > 9999){
                      printf("\n KINDLY INPUT A NEW PIN : ");
                     scanf("%d",&new_pin);
               if(new_pin > 1000 && new_pin < 9999){
                   printf("PIN HAS BEEN SUCCESSFULLY CHANGED");
                   sleep(4);
                        printf("\n DEAR CUSTOMER YOUR NEW PIN IS %d",new_pin);
               }
               else{
                   printf("INPUT A VALID FOUR DIGIT PIN");
               }
              }
              
               
              
         


    return 0;
}