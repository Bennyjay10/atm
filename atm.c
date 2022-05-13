#include<stdio.h>
#include<unistd.h>
#include"atm.h"
  int pin;
int option;
int option_opt;
int input;
int balance=20000;
int deposit;
int another_transaction;
int new_pin;
int transact();
   int transaction(){  
      
             printf("\t\t#======*YOU ARE HIGHLY WELCOME TO BENNYJAY'S BANKING PLC*======# \n");
             sleep(3);
             
             // DEFAULT PIN = 2410
           while(pin!=2410){
                 printf("\n KINDLY INPUT YOUR PIN : ");
                 scanf("%d",&pin);
                 sleep(3);
            if(pin == 2410){
                printf("SUCCESSFUL!!!");
                sleep(3);
            }else{
                 printf("INVALID PIN!!!");
            }
               }
               printf("\n\t\t\t\t#======*AVAILABLE TRANSACTIONS*======#");
               sleep(3);
               printf("\n\n\t\t1.Withdrawal");
               printf("\n\n\t\t2.Deposit");
               printf("\n\n\t\t3.Balance Check");
               printf("\n\n\t\t4.Change Pin");
             printf("\n\n\t\tPlease select any option: ");
               scanf("%d",&option);
               sleep(3);
              
               switch (option)
               {
               case 1:
               do{
                    printf(">>SAVINGS(1)");
                printf("\n>>CURRENT(2)");
               printf("\n Select from option :");
                 scanf("%d",&option_opt);
                 
                  } while(option_opt > 2 );
             
             
               
                     if(option_opt<= 2 ){
                 printf("\nPick from the following options :");
                printf("\n>>1000(1)");printf("\n\t\t\t>>2000(2)");
                printf("\n>>5000(3)");printf("\n\t\t\t>>10000(4)");
                printf("\n>>15000(5)");
                            scanf("%d",&input);
                           if (input == 1){
                                    printf("DEAR CUSTOMER YOU'VE SUCCESSFULLY WITHDRAWN 1000");
                                    
                           }
                      else if(input == 2){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 2000");
                      }
                       else if(input == 3){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 5000");
                 }
                          else if(input == 4){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 10000");
                          }
                           
                              else if(input == 5){
                          printf("YOU'VE SUCCESSFULLY WITHDRAWN 15000");
                              }
                                }
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction method here
                    transaction();
                }
                else if (another_transaction==2)
                {
                    printf("Thanks for using our ATM service!!");
                    return 0;
                }
                else{
                    printf("Invalid option inputed!!");
                    return 0;
                }

                                
               
                                 break;
                                 case 2:
                                 //DEPOSIT
                     printf("\n\n\t\tKINDLY ENTER AMOUNT TO DEPOSIT : ");
                     scanf("%d",&deposit);
                     //updating balance variable
                     balance = balance + deposit;
                     printf("DEAR CUSTOMER THANK YOU FOR DEPOSITING......\n");
                     printf("YOUR NEW BALANCE IS %d",balance);
                                 //request for another transaction
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction meyhod here
                    transaction();
                    
                    }
                      else if (another_transaction==2)
                {
                    printf("Thanks for using our ATM service!!");
                    return 0;
                }
                else{
                    printf("Invalid option inputed!!");
                    return 0;
                }
                 break;
               
                      
                      case 3:
                      //BALANCE
                       printf("\n\nYour bank balance is : %d",balance);
                           //request for another transaction
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction method here
                    transaction();
                } 
                 else if (another_transaction==2)
                {
                    printf("Thanks for using our ATM service!!");
                    return 0;
                }
                else{
                    printf("Invalid option inputed!!");
                    return 0;
                }
               
                  break;
                   case 4:
                   transact(pin,new_pin);
                   
                     //request for another transaction
                                 printf("\n\n\t\tDo you want another transaction? \n Press 1 to proceed and 2 to exit \n\n");
                scanf("%d",&another_transaction);
                if(another_transaction==1){
                    //call our transaction method here
                    transaction();
                }
                  else if (another_transaction==2)
                {
                    printf("Thanks for using our ATM service!!");
                    return 0;
                }
                else{
                    printf("Invalid option inputed!!");
                    return 0;
                }
               }
               

                                 
            
               }


       
int main(){
    
   // printf("Would you like to perform another transaction?:");

       transaction();
       

           
    return 0;
}

