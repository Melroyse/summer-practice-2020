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
   	if((s[i]=='a')||(s[i]=='i')||(s[i]=='o')||(s[i]=='y')||(s[i]=='e')||(s[i]=='u')) {printf("%c%c",s[i],s[i]);  }
   
   else printf("%c",s[i]);}
   
	return 0;
}

