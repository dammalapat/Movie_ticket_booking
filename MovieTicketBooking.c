#include<stdio.h>
#include<string.h>
int main()
{  char name[20];
    int city,movie_time,mall_name,movie_name,screen,n,cost,i;
    printf("\t\t\t\t HI,WELCOME TO MOVIE TICKET BOOKING \t\t\t\n");  
    printf("enter your name for booking\n");
    gets(name);
    printf("where do you want to watch the movie ??\n");
    printf("1.HYDERABAD\n");
    printf("2.VIJAYAWADA\n");
    printf("3.KHAMMAM\n");
    printf("choose your option :\n");
    scanf("%d",&city);
    
    switch(city)
    {
        case 1: printf("\t\t\t\t MOVIE LOCATION IS FIXED AT HYDERABAD \t\t\t\t\n");
                break;
        case 2: printf("\t\t\t\t MOVIE LOCATION IS FIXED AT VIJAYAWADA \t\t\t\t\n");
                break;
        case 3: printf("\t\t\t\t MOVIE LOCATION IS FIXED AT KHAMMAM \t\t\t\t\n");
                break;
        default: printf("\t\t\t\t ENTER THE CORRECT LOCATION \t\t\t\t\n");
                break;
    }
if(city<4  && city>0)
{ printf("In which theatre you want to watch the movie ??\n");
printf("1.IMAX\n");
printf("2.PVP\n");
printf("3.PVR\n");
printf("choose your option :\n");
scanf("%d",&mall_name);
switch(mall_name)
 {case 1: printf("\t\t\t\t YOU BOOKED IMAX MALL FOR THIS MOVIE \t\t\t\t\n");
            break;          
    case 2: printf("\t\t\t\t YOU BOOKED PVP MALL FOR THIS MOVIE \t\t\t\t\n");
            break;
    case 3: printf("\t\t\t\t YOU BOOKED PVR MALL FOR THIS MOVIE \t\t\t\t\n");
            break;
    default: printf("\t\t\t\t ENTER THE CORRECT MALL NAME \t\t\t\t\n");
}
if(mall_name<4  && mall_name>0)
{
printf("which movie you want to see ??\n");
printf("1.UPPENA\n");
printf("2.SRIKARAM\n");
printf("3.JAATHI RATNALU\n");
printf("choose your option :\n");
scanf("%d",&movie_name);

switch(movie_name)
{
    case 1: printf("\t\t\t\t YOU BOOKED UPPENA MOVIE \t\t\t\t\n");
           break;
    case 2: printf("\t\t\t\t YOU BOOKED SRIKARAM MOVIE \t\t\t\t\n");
           break;
    case 3: printf("\t\t\t\t YOU BOOKED JATHI RATNALU MOVIE \t\t\t\t\n");
           break;
    default :printf("\t\t\t\t ENTER THE DISPLAYED MOVIE ONLY \t\t\t\t\n");
             break;
}
if(movie_name<4 && movie_name>0)
{
printf("\t\t\t\t FOR ONE TICKET - BALCONY 100 RUPEES\t\t\t\t\n");
printf("\t\t\t\t FOR ONE TICKET - CHAIR 80 RUPEES \t\t\t\t\n");
printf("\t\t\t\t FOR ONE TICKET - BENCH 50 RUPEES\t\t\t\t\n");
printf("Which screen do you want to see the movie ??\n");
printf("1.BALCONY\n");
printf("2.CHAIR\n");
printf("3.BENCH\n");
printf("choose your option :\n");
scanf("%d",&screen);
printf("How many tickets do you want ??\n");
scanf("%d",&n);
switch(screen)
{  case 1: printf("\t\t\t\t YOUR INTEREST IS BALCONY \t\t\t\t\n");
            cost=(100*n);
           break;
    case 2: printf("\t\t\t\t YOUR INTEREST IS CHAIR \t\t\t\t\n");
            cost=(80*n);
           break;
    case 3: printf("\t\t\t\t YOUR INTEREST IS BENCH \t\t\t\t\n");
            cost=(50*n);
           break;
    default: printf("\t\t\t\t PLEASE GIVE CORRECT SCREEN \t\t\t\t\n");
           break;
}
if(screen<4 && screen>0)
{
printf(" In which time do you want to watch the movie ??\n");
printf("1. 10 AM TO 1 PM\n");
printf("2. 2 PM TO 5 PM\n");
printf("3. 6 PM TO 9 PM\n");
printf("4. 9:30 PM to 12:30 AM\n");
printf("choose your timings ??\n");
scanf("%d",&movie_time);
switch(movie_time)
{  case 1: printf("\t\t\t\t YOU CHOOSED 10 AM TO 1 PM TIMINGS \t\t\t\t\n");
           break;          
    case 2: printf("\t\t\t\t YOU CHOOSED 2 PM TO 5 PM TIMINGS \t\t\t\t\n");
           break;
    case 3: printf("\t\t\t\t YOU CHOOSED 6 PM TO 9 PM TIMINGS \t\t\t\t\n");
           break;
    case 4:printf("\t\t\t\t YOU CHOOSED 9:30 PM TO 12:30 TIMINGS\t\t\t\t\n");
          break;
   default: printf("\t\t\t\t PLEASE CHOOSE CORRECT TIMINGS \t\t\t\t\n");
           break;
}
if(movie_time<5 && movie_time>0)
{
printf("the seat numbers for your movie are :\n");
int array[n];
for(i=0;i<n;i++)
{printf("12-%c\t",65+i);
}
printf("\n\t\t\t\t HURRAY!! PROCESS SUCCESSFULLY COMPLETED ...\t\t\t\t\n\n");
printf("\t\t\t\t YOUR DETAILS ARE FINALISED AS :\t\t\t\t\n");
printf("\t\t\t\t %s \t\t\t\t\n",name);
for(i=1;i<4;i++)
{   if(city==1)
    {  printf("\t\t\t\t THE LOCATION FIXED IS HYDERABAD \t\t\t\t\n");
        break;
    }
    if(city==2)
    {    printf("\t\t\t\t THE LOCATION FIXED IS KHAMMAM \t\t\t\t\n");
        break;
    }
    if(city==3)
    {   printf("\t\t\t\t THE LOCATION FIXED IS VIJAYAWADA \t\t\t\t\n");
        break;
    }
    else
        printf("\t\t\t\t ENTER THE CORRECT DETAILS \t\t\t\t\n");
        break;
}

for(i=1;i<4;i++)
{  if(mall_name==1)
    {   printf("\t\t\t\t YOU CHOSEN IMAX MALL \t\t\t\t\n");
        break;
    }
    if(mall_name==2)
    {     printf("\t\t\t\t YOU CHOSEN PVP MALL \t\t\t\t\n");
        break;
    }
    if(mall_name==3)
    {   printf("\t\t\t\t YOU CHOOSEN PVR MALL \t\t\t\t\n");
        break;
    }
    else
        printf("\t\t\t\t ENTER THE CORRECT MALL NAME\t\t\t\t\n");
        break;
}

for(i=1;i<4;i++)
{ if(movie_name==1)
    {       printf("\t\t\t\t YOU BOOKED FOR UPPENA MOVIE \t\t\t\t\n");
        break;
    }
    if(movie_name==2)
    {
        printf("\t\t\t\t YOU BOOKED FOR SRIKARAM MOVIE \t\t\t\t\n");
        break;
    }
    if(movie_name==3)
    {
        printf("\t\t\t\t YOU BOOKED FOR JATHI RATNALU MOVIE \t\t\t\t\n");
        break;
    }
    else
       printf("\t\t\t\t ENTER THE CORRECT MOVIE NAME \t\t\t\t\n");
       break;
}

for(i=1;i<4;i++)
{
    if(screen==1)
    {
        printf("\t\t\t\t YOUR BOOKED SEAT IS BALCONY \t\t\t\t\n");
        break;
    }
    if(screen==2)
    {  
        printf("\t\t\t\t YOUR BOOKED SEAT IS CHAIR \t\t\t\t\n");
        break;
    }
    if(screen==3)
    {
        printf("\t\t\t\t YOUR BOOKED SEAT IS BENCH\t\t\t\t\n");
        break;
    }
    else
      printf("\t\t\t\t ENTER THE CORRECT SEAT POSITION \t\t\t\t\n");
      break;
}
printf("\t\t\t\t THE NUMBER OF TICKETS YOU BOOKED ARE :%d\t\t\t\t\n",n);
printf("\t\t\t\t THE TOTAL COST OF YOUR BOOKED TICKETS IS :%d \t\t\t\t\n",cost);
for(i=1;i<4;i++)
{   if(movie_time==1)
    {
        printf("\t\t\t\t THE TIME YOU HAVE CHOSEN IS 10 AM TO 1 PM\t\t\t\t\n");
        break;
    }
    if(movie_time==2)
    {   printf("\t\t\t\t THE TIME YOU HAVE CHOSEN IS 2 PM TO 5 PM\t\t\t\t\n");
        break;
    }
    if(movie_time==3)
    {   printf("\t\t\t\t THE TIME YOU HAVE CHOSEN IS 6 PM TO 9 PM \t\t\t\t\n");
        break;
    }
    if(movie_time==4)
    {
        printf("\t\t\t\t THE TIME YOU HAVE CHOSEN IS 9:30 PM TO 12:30 PM\t\t\t\t\n  ");
        break;
    }    else
    printf("\t\t\t\t ENTER THE GIVEN TIMINGS ONLY\t\t\t\t\n");
    break;
}
for(i=0;i<n;i++)
{
printf("\t\t\t\t THE SEAT NUMBERS ARE :12-%c\t\t\t\t\n",'A'+i);
}
printf("\t\t\t\tYOUR DETAILS HAVE BEEN REGISTERED\t\t\t\t\n");
printf("\t\t\t\t PLEASE PAY THE TOTAL AMOUNT IN THE THEATRE OFFICE \t\t\t\t\n");
}}}}}
return 0;
}

