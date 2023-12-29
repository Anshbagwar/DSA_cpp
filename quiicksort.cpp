#include <iostream>

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int c = 0;
    for (int i = s; i <= e; i++) {
        if (arr[i] <= pivot) {
            c++;
        }
    }
    
    
    int pi = s + c;
    std::swap(arr[pi], arr[s]);

    int i = s, j = e;
    while (i < pi && j > pi) {
    	
    	
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pi && j > pi) {
            std::swap(arr[i], arr[j]);
        }
    }
    
    
    return pi;
}

void quick(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition(arr, s, e);

   
   
    quick(arr, s, p - 1);
    quick(arr, p + 1, e);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    quick(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

