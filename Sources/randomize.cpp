#include "randomize.h"

randomize::randomize()
{
    srand(time(NULL));
}

int randomize::random(int min, int max){
    int val=0;
    max++;
    val=rand()%(max-min)+min;
    return val;
}
