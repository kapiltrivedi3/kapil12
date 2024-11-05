#include <stdio.h>
#include <stdlib.h>


int electronics_communication()
{
  
    int a[20] = { 1, 0, 1, 0, 1,1,0,1,0,1,0,1,0,1,0,1,0,1,0 };
    int i, ans;

    for (i = 0; i < 20; i++) {
        if (a[i] == 0)
            ans = 1;
        else
            ans = 0;
        printf("\n  Inversion %d = %d", a[i], ans);
    }
return 1;
}
