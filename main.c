#include <stdio.h>
#include "SearchMethods.h"

int main(void) {
    ElemType A[10] = {1,12,33,54,55,86,87,98,99,110};
    printf("%d\n",SequentialSearch(A,10,55));
    ElemType B[4] = {1,4,7,11};
    printf("%d\n",BinarySearch(B,4,8));
}

//mywww到此一游
