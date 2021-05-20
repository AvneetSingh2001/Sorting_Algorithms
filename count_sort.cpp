#include<bits/stdc++.h>
using namespace std;

void countSort(int a[], int n){
    int k = a[0];

    for(int i = 0; i < n; i++)
        k = max(a[i],k);
    
    int b[k + 1];

    for(int i =0 ; i <= k; i++)
        b[i] = 0;
    
    for(int i = 0; i < n; i++)
        b[a[i]]++;
    
    for(int i = 1; i <= k ; i++)
        b[i]+=b[i-1]; 

    int ans[n];
    for(int i = n-1; i >= 0; i--)
        ans[--b[a[i]]] = a[i];

    for(int i = 0; i < n; i++)
        a[i] = ans[i];
}

int main(){
    
    cout<<"Enter the size : ";
    int n;
    cin>>n;

    cout<<"\nEnter the arrey : ";
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    countSort(a, n);

    cout<<"\nSorted arrey : ";
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    
}