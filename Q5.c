//Find the largest element
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int largest=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("The largest is :%d",largest);
    return 0;
}