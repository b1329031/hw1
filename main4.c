#include <stdio.h>
#include <string.h>

void reverse_string(char *str){
    int len = strlen(str);
    for(int i = 0; i < len / 2; i ++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len -i -1] = temp;
    }
}

int main(){
    char a[] = "HELLO";
    reverse_string(a);
    printf("%s\n", a);
    return 0;
}
