#include <iostream>
#include <time.h>

using namespace std;

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {

    const int N = 10000; // Array size

    // array creation

    int* a = new int[N];

    // array filling

    for (int i = 0; i < N; ++i) {

        a[i] = rand();

    }

    clock_t start, end; // variables for time measurements

    start = clock(); // start counting

    bubbleSort(a, N); // sort

    end = clock(); // End of count

    cout << "Time: " << (double)(end - start) / CLOCKS_PER_SEC << " sec." << endl; //Window results.
}
