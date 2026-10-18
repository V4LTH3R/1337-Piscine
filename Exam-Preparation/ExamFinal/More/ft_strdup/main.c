#include<stdio.h>
#include<stdlib.h>
int str_len(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
char * ft_strdup(char *str){
    char *strN  = calloc(1, str_len(str) + 1);
    if(strN == NULL){
        return NULL;
    }
    else {
        int i = 0;
        while(str[i] != '\0'){
            strN[i] = str[i];
            i++;
        }
        strN[i] = '\0';
        return strN;
    }
}

int main(){
    char *str = "hello world";
    char *strN = ft_strdup(str);
    printf("%s", strN);
    free(strN);
    return 0;
}