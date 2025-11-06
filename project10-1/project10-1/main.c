
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char str[30] = "happy C programming";
    
    printf("string %s length : %i\n",
           str, strlen(str));
    
    system("PAUSE");
    return 0;
    }
