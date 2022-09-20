#include <stdio.h> 
#include <string.h>
void my_define(int param_1)
{
    if (param_1== 1) {
     printf("I have an odd number of arguments.\n");
     return;
    }
    if (param_1 == 2) {
     printf("I have an even number of arguments.\n");
     return;
    }
    if (param_1 == 3) {
     printf("I have an odd number of arguments.\n");
     return;
    }
}
//SUCCESS  