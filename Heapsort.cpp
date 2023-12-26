#include <iostream>
using namespace std;

void heapify(int array[], int size, int index)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && array[left] > array[largest])
        largest = left;

    if (right < size && array[right] > array[largest])
        largest = right;

    if (largest != index) {
        swap(array[index], array[largest]);
        heapify(array, size, largest);
    }
}

void heapSort(int array[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(array, size, i);

    for (int i = size - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << array[i] << " ";
    cout << "\n";
}

int main()
{
    int num;
    cin >> num;
    int array[num];

    for (int i = 0; i < num; i++) {
        cin >> array[i];
    }

    heapSort(array, num);
    printArray(array, num);

    return 0;
}
