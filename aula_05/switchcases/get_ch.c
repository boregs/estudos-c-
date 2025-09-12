#include <stdio.h>
#include <conio.h>

int main(){
    char ch;
    while((ch = getch())!= 'X'){
        if (ch >= '0' && ch <= '9')
            printf("%c", ch);
    }
    printf("\n");
    return 0;
}
