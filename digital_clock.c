/* 
Author : Rohit choudhary
github : https://github.com/r9hit/
*/


#include<stdio.h>
#include<windows.h>

void choice();
void timer();
void instructions_for_clock();
void clock();

int main(){
    printf("        Author : Rohit Choudhary\n");
    printf("        github : https://github.com/r9hit/ \n\n");
    clock();
    return 0;
}

void choice(){
    int option; 
    read:
    printf("Choose one option :\n");
    printf("\n Press 1 for setting timer\n"); 
    printf("\n Press 2 for setting timer\n");
    scanf("%d",&option);
    if(option ==1){
        timer();
    }
    else if(option == 2 ){
        clock();
    }
    else{
     goto read;
    }
}

/* function for display instructions for clock*/

void instructions_for_clock(){
    printf("This digital clock shows time in HH/MM/SS format set by user \n");
    printf("\n Rules for setting the time in given Digital clock :-\n");
    printf("\n clock will take Hours, minutes and seconds as input as follows :\n");
    printf("Hours limit   : 0 to 23\n");
    printf("Minutes limit : 0 to 59\n");
    printf("Hours limit   : 0 to 59\n");

}
/* funnction for digital clock */
void clock(){
       int hour,min,sec;
       int delay = 1000;
       int date,month,year;
     
       instructions_for_clock();
       printf("\nSet Time : \n");
       printf("Enter hours : ");
       scanf("%d",&hour);
       printf("Enter minutes : ");
       scanf("%d",&min);
       printf("Enter seconds : ");
       scanf("%d",&sec);

       if( hour>23 || min>59 ||sec>59){
                    printf("Error! \n Set the time correctly \n ");
                    exit(0);
       }

       /* This loop will run infinite time with a time delay of 1000 miliseconds */
       while(1){
               sec++;
               if(sec>59){
                    min++;
                    sec=0;
               }
               if(min>59){
                    hour++;
                    min=0;
               }
               if(hour>23){
                    
                    hour=0;
               }
               printf("\n Clock : ");
               printf("%02d:%02d:%02d",hour,min,sec); /* time format hh/mm/ss */
               Sleep(delay); /* sleep function will provide delay of 1000 miliseconds*/
               system("cls"); /* this function will clear screen*/

       }

}
