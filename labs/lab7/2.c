#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void func(int n,int m,int a[n][m])
{	srand(time(NULL));
	int i,j;
	for(i=0;i<n;i++)
     {for(j=0;j<m;j++)
	{a[i][j]=2*m*(rand()%13-13)+16*n;
	printf("%d\t",a[i][j]);}
	printf("\n");}
	
	
}


void suma (int n, int m,int a[n][m])
{	int i,j;
int sum=0;
	for(i=0;i<n;i++)
     {for(j=i;j<m;j++)
	sum+=a[i][j];
	}

	printf("SUMA: %d\t",sum);
}

void index(int n,int m,int a[n][m])
{
	int i,j, i_idx,j_idx, min=a[0][0];
	for(i=0;i<n;i++)
	{for (j=0;j<m;j++)
		 if(min>a[i][j]) { min=a[i][j]; i_idx=i;j_idx=j; }
	}
	printf("\nIndex of minimal:  %d\t%d",i_idx+1,j_idx+1);
	printf("\n");

}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	int n,m;
	printf("Size of matrix\n");
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m]; 
	printf("Matrix:\n");
	
	func(n,m,a);
	suma(n,m,a);
    index(n,m,a);

	return 0;
}

