 #include <stdio.h>

 int main(){
    FILE *ptr=NULL;
    ptr= fopen("garbage.txt","r");
    char c= fgetc(ptr);
    printf("the char is %c\n",c);
    c= fgetc(ptr);
    printf("the char is %c\n",c);
    c= fgetc(ptr);
    printf("%c",c);
    fclose;
    return 0;
 }