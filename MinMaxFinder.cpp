#include <iostream>
using namespace std;

void findMinAndMax(const int arr[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (*min >= arr[i]) {
            *min = arr[i];
        }
        if (*max <= arr[i]) {
            *max = arr[i];
        }
    }
}

int main() {
    int size = 10;
    int numbers[] = {23, 5, 67, -2, 45, 87, 1, 99, 34, -10};

    int min = numbers[0];
    int max = numbers[0];

    findMinAndMax(numbers, size, &min, &max);

    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;

    return 0;
}