#include<stdio.h>
void insertionsort(int*,int);
int main(){
    int n,a[100],i;
    printf("enter the no of elements store in array\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
void insertionsort(int a[],int n)
{
    int k,temp,j;
    for(k=1;k<n;k++){
        temp=a[k];
        j=k-1;
        while(temp<a[j] && j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}