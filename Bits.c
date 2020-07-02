//eric grant
//ewgrant
//take int input and output number of times it can be divided by 2 until it is less than 1

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] ){
    //exit if no argument
    if(argc < 2){
        printf("Usage: Bits <integer N>\n\n");
        return 0;
    }

    int count = 0;
    int num = atoi(argv[1]);

    //error if negative
    if(num < 0){
        printf("ERROR: negative integer!\n\n");
        return 0;
    }

    //divide that number
    while(num >= 1){
        num = num / 2;
        ++count;
    }

    printf("%d\n\n", count);

    return 0;
}