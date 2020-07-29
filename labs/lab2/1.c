#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int K[9];
	int i,max,min,pos_max,pos_min,buff;
	printf("Vhidnyi array\n");
	for(i=0;i<9;i++){
	
	K[i]=rand()%20-10;
	printf("%d\t",K[i]);}
	printf("\n");
	
	max= K[0];
	pos_max=0;
	for (i=0;i<9;i++)
	{ if(max <K[i]){
 max = K[i];
pos_max= i;	
	}}
	printf("max=%d",max);
	printf("\n");
	min= K[0];
	pos_min=0;
	for (i=0;i<9;i++)
	{ if(min >K[i])
	{
 min = K[i];
pos_min= i;	
	}
}
	printf("min=%d",min);
	buff=K[pos_min];
	K[pos_min]=K[pos_max];
	K[pos_max]=buff;
		printf("\nresult array\n");
	for(i=0;i<9;i++){
	

	printf("%d\t",K[i]);}
	printf("\n");
	return 0;
}
