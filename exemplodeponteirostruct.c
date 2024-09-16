#include <stdio.h>
#include <stdlib.h>
    typedef struct valores
    {
        int valorInt;
        double valorFloat;
    };
    
    int main(){
        // struct valores val;
        // val.valorInt = 10;
        // val.valorFloat = 2.2;

        // struct valores *pont_valores;
        // pont_valores = &val;

        // printf("v1 = %d | v2 = %.2f | end(v1) = %u | end(v2) = %u\n", val.valorInt, val.valorFloat, &val.valorInt, &val.valorFloat);
        // printf("p = %u | &val = %u\n", pont_valores, &val);
        // printf("(*p).v1 = %d | (*p).v2 = %.2f\n", (*pont_valores).valorInt, (*pont_valores).valorFloat);
        // printf("p->v1 = %d | p->v2 = %.2f\n",pont_valores->valorInt, pont_valores->valorFloat);

        

        // float a = 20.8, *p, b = 15.7, *q;
        // p = &a; q = &b;
        // printf("a = %f; b = %f;\n", a, b);
        // printf("p = &a = %ld; q = &b = %ld;\n", p, q);
        // printf("&p = %ld; &q = %ld;\n", &p, &q);
        // printf("a = %f; *p = %f;\n", a, *p);
        // printf("b = %f; *q = %f;\n", b, *q);
        // *q = *p + 2;
        // printf("a = %f; *p = %f;\n", a, *p);
        // printf("b = %f; *q = %f;\n", b, *q);
        // p = q;
        // printf("a = %f; *p = %f;\n", a, *p);
        // printf("b = %f; *q = %f;\n", b, *q);

        // return 0;

        int a = 10;
        int **p;
        *p = &a;
        printf("%d\n",&a);
        printf("%d\n", *p);
    
    }