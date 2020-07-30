#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void func(int n,int *a)
{	srand(time(NULL));
	int i;
	for(i=0;i<n;i++)
	{a[i]=rand()%23-13;
	printf("%d\t",a[i]);
	
	}
}
void index(int n,int *a)
{
	int i, idx, min=a[0];
	for(i=0;i<n;i++)
	{
		 if(min<a[i]) { min=a[i]; idx=i; }
	}
	printf("\nIndex of minimal:  %d",idx);
	printf("\n");
	int k,buff;
	
	
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++)
		{if (a[i]<a[i+1])
		{
		buff=a[i];
		a[i]=a[i+1];
		a[i+1]=buff;
		}}
	}
			printf("\nSort array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);}
	printf("\n");
	
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int n;
	printf("Size of array\n");
	scanf("%d",&n);
	int a[n]; 
	printf("Array:\n");
	
	func(n,a);
    index(n,a);

	return 0;
}

