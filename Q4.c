//Find the average of elements
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int average=0;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
      sum=sum+arr[i];
        
    }
    printf("The average is:%d",sum/5);
    return 0;
}