#include<stdio.h>
int main(){
    int search = 2;
    int arr[6] = {1,2,3,4,5,6};
    int found = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}