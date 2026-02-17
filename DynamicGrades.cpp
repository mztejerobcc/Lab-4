#include <iostream>
#include <iomanip>
using namespace std;

// Helper function that prints out the current array.
void printArray(double* arr, int size) {
    cout << fixed << setprecision(2);
    cout << "The sorted scores are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

void getTestScores(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void sortScores(double* arr, int size) {
    /* 
    This video was referenced to write this algorythm: https://www.youtube.com/watch?v=clhQWfan72k
    */
    for (int i = 0; i < size; i++) {
        // the last term sorted will be the largest after each iteration
        for (int j = 1; j < size - i; j++) {
            // swap two adjacent numbers if they are not in ascending order
            if (arr[j - 1] > arr[j]) {
                double dummy = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = dummy;
            }
        }
    }
}

double calculateAverage(double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

int main() {
    int numTestScores;

    cout << "Enter the number of test scores: ";
    cin >> numTestScores;

    if (numTestScores < 0) {
        cout << endl;
        cout << "ERROR: the number of test scores must be a positive number..." << endl;
        cout << "EXITING..." << endl;
        return -1;
    }

    double testScores[numTestScores];

    getTestScores(testScores, numTestScores);
    sortScores(testScores, numTestScores);

    printArray(testScores, numTestScores);

    cout << fixed << setprecision(2);
    cout << "The average score is: " << calculateAverage(testScores, numTestScores) << endl;

    return 0;
}