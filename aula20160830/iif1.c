#include <stdio.h>
#include <float.h>
#include <time.h>
#include <stdlib.h> // RAND_MAX
int main(){
    srand (time(0));
    int i;
    for (i=0; i<10; i++)
        printf("%f\n", (float)rand()/RAND_MAX);
    printf("%.30lf %.30lf\n", DBL_EPSILON/4.0, pow(2.,-54));
    printf((1==1-DBL_EPSILON/4.0)? "igual\n" : "diferente\n");
    return 0;
}
