#include<stdio.h>

int main() {

    int arr[100], m;

    printf("enter the size of the element, max size of the array is 100 : ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("output the 1d array code : ");
        for(int i=1; i<=m; i++){
            printf("%d \a", arr[i]);
        }

    return 0;
}