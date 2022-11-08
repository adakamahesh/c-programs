#include <stdio.h>
int main()
{
    int a[6] = {5, 6, 3, 8, 9, 4}, low, high, mid, n = 6, key, found = 0;
    printf("enter the value to find:\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            printf("found @ loc is %d\n", mid);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("not found");
    }
    return 0;
}