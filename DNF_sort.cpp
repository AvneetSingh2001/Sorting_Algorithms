#include<iostream>
using namespace std;


void dnfSort(int a[], int n){
    int low = 0; 
    int mid = 0; 
    int high = n-1;

    while(mid < high){
        if (a[mid] == 0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }else if (a[mid] == 1)
            mid++;
        else if (a[mid] == 2)
        {
            swap(a[high],a[mid]);
            high--;
        }
                
    }
}

int main(){
    
    int a[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};

    dnfSort(a,9);

    for(int i = 0; i < 9; i++)
        cout<<a[i]<<" ";
    
}