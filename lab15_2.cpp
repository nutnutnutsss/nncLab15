#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double matrix[][N]){
    for(int i = 0; i < N; i++){
        cout << "Row " << i+1 << ": ";
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }
}

void findLocalMax(const double oldMatrix[][N], bool newMatrix[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            newMatrix[i][j] = 0;
        }
    }
    for(int i = 1; i < N-1; i++){
        for(int j = 1; j < N-1; j++){
            if(oldMatrix[i][j] >= oldMatrix[i][j+1] && oldMatrix[i][j] >= oldMatrix[i][j-1] && oldMatrix[i][j] >= oldMatrix[i+1][j] && oldMatrix[i][j] >= oldMatrix[i-1][j]){
                newMatrix[i][j] = 1;
            }
        }
    }
}

void showMatrix(const bool matrix[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}