#include <stdio.h>

static void function_A(void){   printf("hello");  }
static void function_B(void){   printf("bye");    }
static void function_C(void){printf("bye");}

// 関数へのポインタを指し示す配列
void (* const FuncPtrArray[])(void) = {
    function_A,
    function_B,
    function_C,
};

int main(void)
{
    FuncPtrArray[0]();
    FuncPtrArray[1]();
    printf("%d", ((int (*)(void))FuncPtrArray[2])());
}
