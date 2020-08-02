#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
typedef struct PElem {
	char inf;
	struct PElem *Next;
}TElem;
TElem *st, *pt, *dod,*pt1;

void funk (TElem *pt){
int total=0;
  pt1=pt;
while (pt != NULL)

  { if (pt->inf>96&&pt->inf<123)
     { int kil=0;
     
      while (pt1 != NULL)

  {
          if (pt->inf==pt1->inf) kil++;

          pt1=pt1->Next; }

      if (kil==1) {total++;}}
     pt1=st;
pt = pt->Next;
  }
printf("kil%d",total);
}

int main(int argc, char *argv[]) {

	int n, i;
	printf("n= ");
	scanf("%d", &n);
	st= NULL, pt=NULL;
	for(i=0; i<n; i++){
		dod=(TElem*)calloc(1,sizeof(TElem));
		printf("NEW znach: ");
		scanf("%s",&dod->inf);

		dod->Next=NULL;
		if(st==NULL)st=dod;
		else pt->Next=dod;
		pt=dod;

	}
		pt = st; i = 0;
		pt1=pt;
		int total=0;

		while (pt != NULL)

  { printf("%c\n",pt->inf);



pt = pt->Next;}



pt = st;
funk(pt);

	return 0;
}
