#include "PointerPractice.hpp"

TaskAAnswers taskA_pointerExpressions(int arr[]) {
	int* p = arr;

	return {
		*arr,
		arr[0],
		*(arr + 1),
		arr[1],
		arr + 1,
		&arr[1],
		*p,
		p[0],
		*(p + 2),
		p[2],
		arr + 1 == &arr[1],
		*(arr + 2) == arr[2]
	};
}

int* allocate(std::size_t size) {
    return new int[size]();
}

int* lastMinimum(int* arr, std::size_t size) {
    if (size == 0) {
        return nullptr;
    }

    int* minPtr = arr;
    for (std::size_t i = 1; i < size; ++i) {
        if (arr[i] <= *minPtr) {
            minPtr = &arr[i];
        }
    }
    return minPtr;
}

void reverse(int* arr, std::size_t size) {
    if (size < 2) {
        return;
    }
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

void swapValues(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapPointers(int** a, int** b){
    int* temp = *a;
    *a = *b;
    *b = temp;
}

bool isPalindrome(const int* arr, std::size_t size){
    const int* left = arr;
    const int* right = arr + size - 1;

    while (left < right) {
        if (*left != *right) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}