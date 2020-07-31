#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void Paral(int a,int b,int c,int d)
{	srand(time(NULL));
	if ((1.0*a/c)==(1.0*b/d)){
	printf("Paralel");
}
	else
	printf("Ne Paralel");
}


int main(int argc, char *argv[]) {

	int a,b,c,d;
	printf("a=\n");
	 scanf("%d",&a);
	printf("b=\n");
	 scanf("%d",&b);
    printf("c=\n");
	 scanf("%d",&c);
	printf("d=\n");
	 scanf("%d",&d);

	Paral(a,b,c,d);
	return 0;
}

