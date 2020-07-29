#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int S[8][8];
	int i,S1[32],S2[32],j;
	float av;
	printf("Vhidnyi array\n");
	for(i=0;i<8;i++){
	for(j=0;j<8;j++){
	S[i][j]=rand()%20-10;
	printf("%d\t",S[i][j]);}
	printf("\n");}
	
	printf("\n");

	int l=0;
	printf("Vushe golovna diagonal\n");
 for(i=0;i<8;i++){
 for(j=i+1;j<8;j++)
	{ S1[l]=S[i][j];
	printf("%d\t",S1[l]);
	l++;}}
	
	printf("\n");
	l=0;
printf("Nusahe golovna diagonal\n");
 for(i=0;i<8;i++){
 for(j=0;j<i;j++)
	{ S2[l]=S[i][j];
	printf("%d\t",S2[l]);
	l++;}}
	printf("\n");
	
	return 0;
}
