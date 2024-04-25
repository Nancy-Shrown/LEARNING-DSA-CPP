#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[] = { 10 ,20, 30, 40, 50 };
	int size = sizeof(arr)/sizeof(arr[0]);

	int reverse_arr[size];
	for(int i=0; i<size; i++) {
		reverse_arr[size-i-1] = arr[i];
	}

	for(int i=0; i<size; i++) {
		cout <<reverse_arr[i]<<" ";
	}
	return 0;
}
