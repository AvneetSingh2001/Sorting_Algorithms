#include<stdio.h>

void bubble_sort(int a[], int n)
{
    int counter =  0;
    while(counter < n - 1){
        for(int i = 0; i < n - counter - 1; i++){
            if(a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i+1] = temp;
            }
        }
        counter++;
    }
}    

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter elements : ");
    for(int i=0 ; i<n ; i++)
        scanf("%d",&a[i]);

    
    bubble_sort(a,n);
    
    printf("After Sorting : ");
    for(int i=0 ; i<n ; i++)
        printf("%d ",a[i]);

    return 0;
}