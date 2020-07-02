//eric grant
//ewgrant
//determine the distance between two circles centers and determines if they overlap. Also tells area.
//takes six arguments: c1-x, c1-y, c1-r, c2-x, c2-y, c2-r

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846264338327950288)
#endif /* M_PI */

int main( int argc, char* argv[] ){
    //exit if few argument
    if(argc < 7){
        printf("Usage: TwoCircles <x1> <y1> <r1> <x2> <y2> <r2>\n\n");
        return 0;
    }

    //     1    2    3         4    5    6    
    double c1x, c1y, c1r, c1a, c2x, c2y, c2r, c2a, distance, sumOfRad;
    int intersect = 0;

    c1x = atof(argv[1]);
    c1y = atof(argv[2]);
    c1r = atof(argv[3]);

    c2x = atof(argv[4]);
    c2y = atof(argv[5]);
    c2r = atof(argv[6]);

    distance = sqrt(pow(c2x-c1x, 2.0)+pow(c2y-c1y, 2.0));
    sumOfRad = c1r + c2r;

    printf("Circle 1: (%.2f, %.2f) r = %.2f area = %.4f\n", c1x, c1y, c1r, M_PI * pow(c1r, 2.0));
    printf("Circle 2: (%.2f, %.2f) r = %.2f area = %.4f\n", c2x, c2y, c2r, M_PI * pow(c2r, 2.0));
    printf("Distance between centers = %.4f\n", distance);

    if(distance < sumOfRad){
        printf("%.4f < %.4f, circles intersect", distance, sumOfRad);
    } else {
        printf("%.4f >= %.4f, circles do not intersect", distance, sumOfRad);
    }

    printf("\n\n");

    return 0;
}