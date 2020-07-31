#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct music
{
	char nosiy[6];
	char name [255];
	char artist[255];
	int tim;
	int kil;
	int price;
};
void Artist(int n, struct music *M)
{   int i,sum=0;
    char a[50];
	printf("Enter you Artist\n");
    scanf_s("%s",&a,sizeof(a));
	
	for(i=0;i<n;i++)
	{
		if(strcmp(M[i].artist,a)==0) {sum+=M[i].tim;}
		}
	if(sum!=0){ printf("All time of this Artist: %d", sum);	}
	else printf("We don't have information of this artist");
}

void Av_Price(int n, struct music *M)
{   int i,sum=0,kil=0;
float av;
    
	for(i=0;i<n;i++)
	{
		if(strcmp(M[i].nosiy,"tape")==0) {sum+=M[i].price;kil++; }
		}
	av=1.0*sum/kil;
		printf("Avarage sume of all tape %.3f",av);
}
int main(int argc, char *argv[]) {
 int n,i;
 printf("Enter n="); scanf("%d",&n);
 struct music M[n];
 for (i=0;i<n;i++)
 {
 	printf("Enter informasion of %d music\n ",i+1);
 	printf("Type: ");
 	printf("1-gramp\n 2-tape\n 3-disc\n");
 	int t;
 	scanf("%d",&t);
 	switch(t)
 	{
 		case 1: { strcpy(M[i].nosiy,"gram");
			break;
		 }
		case 2: { strcpy (M[i].nosiy,"tape");
			break;
		}
		case 3: { strcpy (M[i].nosiy,"disc");
			break;
		}
		
		
	 }
	 printf("Name:"); scanf_s("%s",&M[i].name,sizeof(M[i].name));
	 printf("Artist:"); scanf_s("%s",&M[i].artist,sizeof(M[i].artist));
     printf("All time:"); scanf("%d", &M[i].tim);
     printf("Kil traks:"); scanf("%d", &M[i].kil);
     printf("Price:"); scanf("%d", &M[i].price);
     printf("-----------------------------------------------------------\n");
 }
 Artist(n,M);
 printf("\n");
 Av_Price(n,M);
	return 0;
}

