#include<iostream>
using namespace std;

void merge(int a[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int b1[n1];
    int b2[n2];

    for(int i = 0; i < n1; i++)
        b1[i] = a[l + i];

    for(int i = 0; i < n2;i++)
        b2[i] = a[mid + 1 + i];
    
    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2){
        if (b1[i] < b2[j])
            a[k++] = b1[i++];
        else
            a[k++] = b2[j++];
    }

    while( i < n1)
        a[k++] = b1[i++]; 

    while( j < n2)
        a[k++] = b2[j++]; 
}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        mergeSort(a, l , mid);
        mergeSort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

int main(){
    
    cout<<"Enter the size : ";
    int n;
    cin>>n;

    cout<<"\nEnter the arrey : ";
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    mergeSort(a, 0, n-1);

    cout<<"\nSorted arrey : ";
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    

}