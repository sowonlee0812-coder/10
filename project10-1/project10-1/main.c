
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    
    char input[100];
    FILE* fp;
    int i;
    
     //fopen
    fp = fopen("sample.txt", "w");
    
    for (i=0;i<3;i++)
    {
        //fprintf
        printf("input a word : ");
        scanf("%s", input);    //배열은 &안넣어도됨 input 자체가 포인터임
        fprintf(fp, "%s\n", input);
        
    }
    
        //fclose
        fclose(fp);

    system("PAUSE");
    return 0;
    }
