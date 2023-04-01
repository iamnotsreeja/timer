#include <stdio.h>
#include <time.h>
int main ()
{
    int hours=0;
    int minutes=0;
    int seconds=0;
    int milliseconds=0;
    int totaltime=0,countdowntime,timeleft=0;

	clock_t startTime,countTime;
	printf("enter the countdown time");
    scanf("%d",&countdowntime);

 
    startTime=clock();  // start clock
    timeleft=countdowntime-seconds;   // update timer

	while (timeleft>0) 
	{
		countTime=clock(); // update timer difference
		milliseconds=countTime-startTime;
        seconds=(milliseconds/(CLOCKS_PER_SEC))-(minutes*60);
		minutes=(milliseconds/(CLOCKS_PER_SEC))/60;
		hours=minutes/60;
        timeleft=countdowntime-seconds; // subtract to get difference 


		printf("\nYou have %d seconds left",timeleft);
	}


	printf( "\n\n\n------------Time's out------------------\n\n\n");

return (0);
}
