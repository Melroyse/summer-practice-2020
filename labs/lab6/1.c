#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int **A;
	int i,b[50],n,m,j,*min,*sum,*max,*l;
	max=(int*)malloc(sizeof(int));
	l=(int*)malloc(sizeof(int));
	A=(int**)malloc(5*sizeof(int*));
	for(i=0;i<6;i++)
	A[i]=(int*)malloc(6*sizeof(int));

	printf("Golosuvannia\n");
	for(i=0;i<6;i++){
	for(j=0;j<5;j++){
	A[i][j]=rand()%180;
	printf("%d\t",A[i][j]);}
	printf("\n");}
	
	printf("\n");
max=&A[1][0];
 *l=1;
for(j=0;j<5;j++){
	if(*max<A[1][j]){max=&A[1][j]; *l=(j+1);}
	}
	printf("V 2 misti naybilse nabrav %d kandudat %d golosiv",*l,*max);
	printf("\n");
max=&A[2][0];
 *l=1;
for(j=0;j<5;j++){
	if(*max<A[2][j]){max=&A[2][j]; *l=(j+1);}
	}
	printf("V 3 misti naybilse nabrav %d kandudat %d golosiv",*l,*max);



	return 0;
}

