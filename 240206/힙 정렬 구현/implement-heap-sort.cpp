#include <iostream>
#define MAXN 100001

using namespace std;

int n, heap[MAXN];

void heapify(int n, int heap[], int i){
	int largest = i;
	int left = 2*i;
	int right = 2*i + 1;

	if(left <= n && heap[left] > heap[largest])
		largest = left;
	
	if(right <= n && heap[right] > heap[largest])
		largest = right;

	if (largest != i){
		int tmp = heap[i];
		heap[i] = heap[largest];
		heap[largest] = tmp;
		
		heapify(n, heap, largest);
	}


}	


int main() {
    
	
	
	cin >> n;
	
	for (int i =1; n>= i; i++)
		cin >> heap[i];
	
	
	for (int i= n/2; i >= 1; i--)
    	heapify(n, heap, i);
	
	for (int i= n; i >= 1; i--){
		int tmp = heap[1];
		heap[1] = heap[i];
		heap[i] = tmp;

    	heapify(i-1, heap, 1);
	}

	for (int i =1; n>= i; i++)
		cout << heap[i] << ' ';

    return 0;
}