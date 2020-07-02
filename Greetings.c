//eric grant
//ewgrant
//take two inputs, a greating and a list of names
//greet each name provided with the given greeting

#include <stdio.h>

int main( int argc, char* argv[] ){
    //exit if few argument
    if(argc < 3){
        printf("Usage: Greetings <greeting> <name1> [name2] ...\n\n");
        return 0;
    }

    char* greeting = argv[1];

    //print greetings
    for(int count = 2; count < argc; count++){
        printf("%s %s!\n", greeting, argv[count]);
    }

    printf("\n");

    return 0;
}