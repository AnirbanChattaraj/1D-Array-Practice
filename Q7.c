//Count even numbers in array
#include<stdio.h>
int main(){
    int count=0;
    int arr[6]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
       if (arr[i]%2==0)
       {
         count++;
       }
    }
    printf("Total of even numbers:%d",count);
    return 0;
}