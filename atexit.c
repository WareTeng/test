#include <stdlib.h>
#include <stdio.h>

int atexit(void(*function)(void));
__attribute((constructor)) void before_main() {printf("before 1");}
void fn1(void), fn2(void);

int main(void) {
    atexit(fn2);
    atexit(fn1);
    printf("this is executed first.\n");
}

void fn1() {
    printf("this is");
}

void fn2() {
    printf(" executed next.\n");   
}
