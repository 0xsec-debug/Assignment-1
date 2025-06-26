#include <stdio.h>

int main() {
    int nums[10] = {-4,-1,0,3,10};
    int n=5;
    int sq[5];

 
    for (int i= 0;i <n; i++) {
        sq[i] = nums[i] * nums[i];
    }

 
    for (int i=0; i<n-1; i++) 
{
        for (int j=0; j < n - i - 1; j++)
          {
            if (sq[j]> sq[j + 1]) 
                  {
 
                     int temp = sq[j];
                      sq[j]= sq[j + 1];
                    sq[j+1] = temp;
                }
        }
    }

 
    printf("  Output: ");
    
for (int i =0; i< n;i++) {
        printf("%d ", sq[i]);
    }

    return 0;
}
