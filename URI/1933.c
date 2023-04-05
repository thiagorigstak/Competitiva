#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    int a,b,c;
    scanf("%d %d", &a,&b);
    start = clock();
    c = (a > b) ? a : b;
    printf("%d\n", c);
    end = clock();
    double timetk;
    timetk = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    printf("time taken: %f sec\n",timetk);

    return 0;
}