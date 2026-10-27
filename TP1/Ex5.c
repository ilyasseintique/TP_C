#include <stdio.h>

int main(){
    char s[100];
    printf("donner votre chaine de char :");
    scanf("%99s",s);
    int count = 0;
    while(s[count]!='\0'){
        count++;
    }
    for(int i = 0 ; i<count/2 ; i++){
        if(*(s+i)!=*(s+count-i-1)){
            printf("n'est pas palindrom\n");
            return 0;
        }
    }
    printf("est un palindrom");
return 0;
}