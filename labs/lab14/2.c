#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   char s[255];
   int n, i,j;
   printf("Enter text\n");
   gets(s);
   
   n=strlen(s);
   int kil=0;
   int k1=0,k2;
   for(i=0;i<=n;i++)
   { kil=0;
   	if(s[i]==' ') {k2=i;
	   for(j=k1;j<k2;j++)
	   if((s[j]=='a')||(s[j]=='b')||(s[j]=='c')||(s[j]=='d')||(s[j]=='e')) {kil++;	   }
	   if(kil!=0)
	   {
	   	 for(j=k1;j<k2;j++)
	   	  printf("%c",s[j]);
	   	   printf("\n");
	   }
	   
	   k1=k2+1;}
	   
   }
   
	return 0;
}

