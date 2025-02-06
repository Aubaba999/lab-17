#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int nA, nB;
    int *A, *B, **C;  // C is a pointer to a pointer for 2D array

    cout << "Length of A: ";
    cin >> nA;

    A = new int[nA];  // Allocate memory for array A
    cout << "Input Array A: ";
    for(int i = 0; i < nA; i++) cin >> A[i];

    cout << "Length of B: ";
    cin >> nB;

    B = new int[nB];  // Allocate memory for array B
    cout << "Input Array B: ";
    for(int i = 0; i < nB; i++) cin >> B[i];

    // Allocate memory for 2D array C
    C = new int*[nA];
    for(int i = 0; i < nA; i++) {
        C[i] = new int[nB];
    }

    // Fill the 2D array C with products of A[i] and B[j]
    for(int i = 0; i < nA; i++) {
        for(int j = 0; j < nB; j++) {
            C[i][j] = A[i] * B[j];
        }
    }

    // Output the result
    cout << "\n";
    cout << setw(6) << " "; 
    for(int i = 0; i < nB; i++) {
        cout << setw(5) << B[i] << " ";
    }
    cout << "\n-----------------------------\n";

    for(int i = 0; i < nA; i++) {
        cout << setw(5) << A[i] << " ";
        for(int j = 0; j < nB; j++) {
            cout << setw(5) << C[i][j] << " ";
        }
        cout << "\n";
    }

    // Deallocate memory
    delete[] A;
    delete[] B;
    for(int i = 0; i < nA; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}