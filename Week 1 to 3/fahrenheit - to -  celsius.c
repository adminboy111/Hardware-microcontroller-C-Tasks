#include <stdio.h>
 
int main(void)

{

    int fahr;
 
    for (fahr = 0; fahr <= 300; fahr += 20)

        printf("%3d %6d\n", fahr, 5 * (fahr - 32) / 9);
 
    return 0;

}
 