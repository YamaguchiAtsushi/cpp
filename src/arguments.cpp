#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    printf("argc = %d\n",argc);
    printf("argv[0] = %s\n",argv[0]);
    printf("argv[1] = %s\n",argv[1]);
    printf("argv[2] = %s\n",argv[2]);

    int val1 = atoi(argv[1]);
    printf("%d\n", val1);

    float val2 = atof(argv[2]);
    printf("%f\n", val2);


    return 0;
}