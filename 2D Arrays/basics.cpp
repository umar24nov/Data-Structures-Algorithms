#include <iostream>
using namespace std;

int main (){
    // Initialization of rows and taking its input by user
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Initialization of columns and taking its input by user
    int columns;
    cout << "Enter number of columns: ";
    cin >> columns;
    

    // Initialzation of Matrix/2D-Array
    int matrix[rows][columns];

    // Input
    cout << "Enter values: ";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    // Output
    cout << "Output of Matrix is: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}