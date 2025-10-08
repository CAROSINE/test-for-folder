#include<stdio.h>
int main()
{
    int i,key,arr[50];
    int low,high,mid,num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int found=-1;
    printf("Enter the elements in sorted order: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = num - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid +1;
        }
        else
        {
            high = mid - 1;
        }
    }  
    if(found != -1)
    {
        printf("Element %d found at index %d\n", key,found);
    }
    else
    {
        printf("Element %d not found\n", key);
    }
}
