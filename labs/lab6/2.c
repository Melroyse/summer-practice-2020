#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   char s[255];
   int n, i;
   printf("Enter text\n");
   gets(s);
   n=strlen(s);
   int kil=0;
   for(i=0;i<=n;i++)
   {
   	if(s[i]=='a') {kil++;  }
   }
   printf("Kilkist a: %d",kil);
   int k1,k2;
   for(i=0;i<=n;i++)
   {
   	if(s[i]==' ') {k1=i; break;}
   }
   for(i=n;i>k1;i--)
   {
   	if(s[i]==' ') {k2=i; break;}
   }
   printf("\n");
  
   printf("Name\n");
   
   for(i=k2-1;i>k1;i--)
   printf("%c",s[i]);
	return 0;
}

