#include <iostream>
using namespace std;

template <typename R>
void showArr(R arr[],int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1; i < N; i++){
		T x = d[i];
		int j = i - 1;
		while(j >= 0 && x > d[j]){
			d[j+1] = d[j];
			j--;
		}
		d[j + 1] = x;
		cout << "Pass " << i << ":";
		showArr(d,N);
		cout << '\n';
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}