#include <stdio.h>
#include <time.h>
void main()
{ 
/*
  time_t timer;
  timer=time(NULL);
  printf("The current time is %s.\n",asctime(localtime(&timer)));*/
  
  int hours, minutes; char Name[30], answer;

  time_t timer; 
  struct tm *time_now;
  char *the_time;
  
  timer = time(NULL); //can send null pointer 
  time_now = localtime(&timer); //takes timer and makes in current time zone
  the_time = asctime(time_now); //puts time in text form
  printf("System Date and Time: %s \n",the_time);
  printf("Date %2d/%2d/%4d. Time is %2d:%2d\n",
       time_now->tm_mday, time_now->tm_mon, time_now->tm_year + 1900, 
       time_now->tm_hour, time_now->tm_min);
  do
  { 
    printf("What is your name please? "); scanf("%s", Name);
    do
    {  
       timer = time(NULL); 
       time_now = localtime(&timer); 
       hours = time_now->tm_hour; 
       minutes = time_now->tm_min;
       if (hours < 0 || hours > 23 || minutes < 0 ||
           minutes > 59) 
         printf("Incorrect hours or minutes, try again.");  
    } while (hours < 0 || hours > 23 || minutes < 0 ||
           minutes > 59); 
<<<<<<< HEAD
    if (hours >=1 && hours <=10)
      printf("Good Morning, "); 
    else if (hours >= 11 && hours <=18) 
      printf("Good Afternoon, "); 
=======
    if (hours >=0 && hours <=11)
      printf("Good Morning eiei, "); 
    else if (hours >= 12 && hours <=18) 
      printf("Good Afternoon ahha, "); 
>>>>>>> b19b95e9fd1a7b60296707ef5006982cc7d81f90
    else 
      printf ("Good Evening, "); 
    printf("%s. Time is %02d:%02d\n", Name, hours,
                 minutes);
    printf("Continue (Y/N)?"); scanf("%c", &answer); 
  } while (answer == 'Y'); 
  printf("Good Bye!"); 
  scanf("%c", &answer); 
}