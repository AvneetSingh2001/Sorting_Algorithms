#include<iostream>
using namespace std;

void Heapify(int a[], int n, int i){
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < n && a[l] > a[largest])
        largest = l;

    if(r < n && a[r] > a[largest])
        largest = r;

    if(largest != i){
        swap(a[i], a[largest]);
        Heapify(a, n, largest);
    }
}

void HeapSort(int a[], int n){
    for(int i = (n / 2) - 1; i >= 0; i--)
        Heapify(a, n, i);

    for(int i = n - 1; i > 0; i--){
        swap(a[i], a[0]);
        Heapify(a , i, 0);
    }

}

int main(){
    int a[] = { 10, 20, 15, 30, 40 };
    int n = sizeof(a) / sizeof(a[0]);

    HeapSort(a, n);

    for(int i = 0; i< n; i++)
        cout<<a[i]<<" ";

}