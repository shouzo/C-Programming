#include <stdio.h>
main()
{
      int i;
      int i1, i2, i3, i4;
      int total;
      
      scanf("%d", &i);
      
      i1 = i % 10;                          // 取個位數 
      i2 = (i % 100 - i % 10) / 10;         // 取十位數
      i3 = ((i % 1000) - (i % 100)) / 100;  // 取百位數
      i4 = i / 1000;                        // 取千位數
      
      total = i1 + i2 + i3 + i4;
      
      printf("%d", total); 
}
