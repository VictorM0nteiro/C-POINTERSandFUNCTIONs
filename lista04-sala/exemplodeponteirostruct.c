#include <stdio.h>
#include <stdlib.h>
    typedef struct valores
    {
        int valorInt;
        double valorFloat;
    };
    
    int main(){
        struct valores val;
        val.valorInt = 10;
        val.valorFloat = 2.2;

        struct valores *pont_valores;
        pont_valores = &val;

        printf("v1 = %d | v2 = %.2f | end(v1) = %u | end(v2) = %u\n", val.valorInt, val.valorFloat, &val.valorInt, &val.valorFloat);
        printf("p = %u | &val = %u\n", pont_valores, &val);
        printf("(*p).v1 = %d | (*p).v2 = %.2f\n", (*pont_valores).valorInt, (*pont_valores).valorFloat);
        printf("p->v1 = %d | p->v2 = %.2f\n",pont_valores->valorInt, pont_valores->valorFloat);

        return 0;
    
    }