#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int A[50][50];
	int i,b[50],n,m,j,*min,*sum;
	min=(int*)malloc(sizeof(int));
	sum=(int*)malloc(sizeof(int));
	printf("Kilkist riadkiv i stovpstiv : ");
	scanf("%d",&n);
		
	printf("Vhidnyi array\n");
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	A[i][j]=rand()%20-10;
	printf("%d\t",A[i][j]);}
	printf("\n");}
	
	printf("\n");
	min=&A[0][0];
for(i=0;i<n;i++){
	for(j=i;j<n;j++){
	if(*min>A[i][j]){min=&A[i][j];}
	}}
	printf("MINIMALNE=%d\t",*min);
	printf("\n");
	*sum=0;
for(i=0;i<n;i++){
*sum+=A[i][n-i-1];
	}
		printf("SUMA=%d\t",*sum);
	return 0;
}

