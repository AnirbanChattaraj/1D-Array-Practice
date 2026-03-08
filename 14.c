//Find the second largest element
#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int max=arr[0];
    int smax=arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if (arr[i]>smax && arr[i]!=max)
        {
            smax=arr[i];
        }
        
    }
    printf("%d ",smax);
    return 0;
}