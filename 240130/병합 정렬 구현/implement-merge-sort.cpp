#include <iostream>
#define MAXN 100000

using namespace std;

int merged_arr[MAXN],  arr[MAXN];

void merge(int arr[], int low, int mid, int high){
    int i = low, j = mid+1, k = low;
    
    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            merged_arr[k] = arr[i];
            k++;
            i++;
        }
        else{
            merged_arr[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i <= mid){
        merged_arr[k]= arr[i];
        k++;
        i++;
    }

    while(j <= high){
        merged_arr[k]= arr[j];
        k++;
        j++;
    }

    for (int k = low; high >= k; k++)
        arr[k] = merged_arr[k];
    
}

void merge_sort(int arr[], int low, int high ){
    
    if (low < high){
        int mid = (low + high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}


int main() {
    int n;
    cin >> n;

    for (int i= 0; n>i; i++)
        cin >> arr[i];

    merge_sort(arr, 0, n-1);

    for (int i= 0; n>i; i++)
        cout << merged_arr[i] << ' ';
    
    return 0;
}