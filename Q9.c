//Sum of even and odd elements separately
#include<stdio.h>
int main(){
    int evn=0;
    int odd=0;
    int arr[6]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
       if (arr[i]%2==0)
       {
         evn+=arr[i];
       }
       else{
        odd+=arr[i];
       }
    }
    printf("Total sum of even numbers:%d\n",evn);
    printf("Total sum of odd numbers:%d",odd);
    return 0;
}