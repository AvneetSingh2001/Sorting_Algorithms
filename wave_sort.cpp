#include<iostream>
using namespace std;

void waveSort(int a[], int n){

    for(int i = 1; i < n; i+=2){
        if (a[i] >  a[i-1])
            swap(a[i], a[i-1]);
        
        if (a[i] > a[i+1] && i <= n-2)
            swap(a[i], a[i+1]);
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

    waveSort(a, n);

    cout<<"\nSorted arrey : ";
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";

    return 0;
}