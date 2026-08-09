#include<stdio.h>
int main(){

    int n,i,pos,value;

    printf("Enter the number of element = ");
    scanf("%d",&n);

    int arr[n+1];

    printf("Enter %d elements = ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to insert = ");
    scanf("%d",&pos);

    printf("Enter the value to insert = ");
    scanf("%d",&value);


    //shift element to the right to make space
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    //insert new value at the given positon

    arr[pos-1]=value;
    n++;

    printf("Array after insertion = ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }





return 0;
}
