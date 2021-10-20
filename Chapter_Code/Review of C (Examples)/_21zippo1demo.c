// Listing 10.15: zippo1.c
// zippo info
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};   // 2D array
    // 4 1D array
    printf("   zippo == %p,    zippo + 1 == %p\n",
               zippo,          zippo + 1);
    // zippo, zippo + 1 (It moves the address of {6,8}
    printf("zippo[0] == %p, zippo[0] + 1 == %p\n",
            zippo[0],        zippo[0] + 1);
    // zippo[0] is the address of {2,4}
    printf("  *zippo == %p,   *zippo + 1 == %p\n",
              *zippo,          *zippo + 1);
    // zippo[] = {zippo[0], zippo[1], zippo[2], zippo[3]);
    printf("zippo[0][0] == %d\n", zippo[0][0]);
    printf("  *zippo[0] == %d\n", *zippo[0]);
    printf("    **zippo == %d\n", **zippo);
    printf("       zippo[2][1] == %d\n", zippo[2][1]);
    printf("*(*(zippo+2) + 1 ) == %d\n", *(*(zippo+2) + 1 ));
    return 0;
}
