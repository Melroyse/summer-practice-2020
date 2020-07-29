#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int A[50][50];
	int i,b[50],n,m,j;
	
	printf("Kilkist riadkiv: ");
	scanf("%d",&n);
		printf("Kilkist stovpstiv: ");
	scanf("%d",&m);
	printf("Vhidnyi array\n");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	A[i][j]=rand()%20-10;
	printf("%d\t",A[i][j]);}
	printf("\n");}
	
	printf("\n");

	int min;

 for(j=0;j<m;j++){
 	min=A[0][j];
 for(i=0;i<n;i++)
	{ if(min>A[i][j])
	{min=A[i][j];}
	} b[j]=min;}
	
	printf("\n");
	printf("Rezultat\n");
 for(j=0;j<m;j++)
	{ printf("%d\t",b[j]);
	}
	printf("\n");
	
	return 0;
}

