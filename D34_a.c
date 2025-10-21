//Q67:Insert an element in an array at a given position.//

#include <stdio.h>
int main() 
{
    int a[100], n, pos, val, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(i=n;i>=pos;i--) 
    {
        a[i] = a[i-1];
    }
    a[pos-1] = val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++) 
    {
        printf("%d ", a[i]);
    }

    
}