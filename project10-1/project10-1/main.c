
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {


    char input[100];
    FILE* fp;
    char c;
    
    
    //fopen
    fp = fopen("/Users/jw/Documents/programming/10sample.txt", "r");
    
    while ( (c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    
#if 0
    while ( fgets(input, 100, fp) != 0)  // or  > 0
    {
        printf("%s", input);
    }
#endif
    
    //fclose
    fclose(fp);

    system("PAUSE");
    return 0;
    }
