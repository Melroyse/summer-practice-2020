#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
printf("vvedit x");
scanf("%d",&x);
printf("vvedit y");
scanf("%d",&y);
 
if (x*x+y*y<=4){
	if (x*y>0)
       printf("yes");
	    else
        printf("no");	}
    else
        printf("no");	
	return 0;
}
