#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int L[5][4];
	int i,max,min,j;
	float av;
	printf("Vhidnyi array\n");
	for(i=0;i<5;i++){
	for(j=0;j<4;j++){
	L[i][j]=rand()%20-10;
	printf("%d\t",L[i][j]);}
	printf("\n");}
	
	printf("\n");
	max= L[0][0];
	
 for(i=0;i<5;i++){
 for(j=0;j<4;j++)
	{ if(max <L[i][j])
 max = L[i][j];
		}}
	printf("max=%d",max);
	printf("\n");
	min= L[0][0];
for(i=0;i<5;i++){
 for(j=0;j<4;j++)
	{ if(min>L[i][j])
 min = L[i][j];}}
 
 
	printf("min=%d",min);
av=((max+min)/2.0);
	

	printf("\naverage=%0.3f\t",av);
	printf("\n");
	
	return 0;
}
