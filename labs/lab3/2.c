#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int K[5][3];
	int i,max,min,j,imax,jmax;
	float av;
	printf("Vhidnyi array\n");
	for(i=0;i<5;i++){
	for(j=0;j<3;j++){
	K[i][j]=rand()%20-10;
	printf("%d\t",K[i][j]);}
	printf("\n");}
	
	printf("\n");
	max= -999;
	
 for(i=0;i<5;i++){
 for(j=0;j<3;j=j+2)
	{ if ((K[i][j]>0)&&(K[i][j]%2==0))
		{
	if(max<K[i][j])
 {max = K[i][j];
 imax=i;
 jmax=j;
		}}}}
	printf("max=%d",max);
	printf("\n");

 
	printf("imax=%d",imax);
	printf("\n");
	printf("jmax=%d",jmax);
	printf("\n");
	
	return 0;
}
