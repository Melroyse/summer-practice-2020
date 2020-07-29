#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int D[12],Z[12];
	int i,j;
	j=0;
	printf("Vhidnyi array\n");
	for(i=0;i<12;i++){
	
	D[i]=rand()%20-10;
	printf("%d\t",D[i]);}
	printf("\n");
		for(i=0;i<12;i++){
	
	if(D[i]<0) {
	Z[j]=D[i];
	j++;
	}
	}
	
	printf("\n");
	int k,buff;
	
	
	for(k=1;k<j;k++){
		for(i=0;i<j-k;i++)
		{if (Z[i]<Z[i+1])
		{
		buff=Z[i];
		Z[i]=Z[i+1];
		Z[i+1]=buff;
		}}
	}
	
	
	
	
	
	
	
	
		printf("\nresult array\n");
	for(i=0;i<j;i++){
	

	printf("%d\t",Z[i]);}
	printf("\n");
	return 0;
}
