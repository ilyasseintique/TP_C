#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   char *s = malloc(30);
   printf("entrer votre phrase :");
   scanf("%s",s);
   int n = strlen(s);
   char * p1 = s;
   char * p2 = s+n-1;
   char temp;
   while(p1<p2){
      temp = *p1;
      *p1 = *p2;
      *p2 = temp;
      p1++;
      p2--;
   }
   printf("%s",s);
return 0;
}