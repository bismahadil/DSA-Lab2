#include <iostream>
#include <cassert>
using namespace std;

// ---- Function under test ----
bool isSorted(const int* arr, const int size);

// ---- Test cases (written before the implementation) ----

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

void testSingleElement() {
    int arr[] = {7};
    bool result = isSorted(arr, 1);
    assert(result == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    bool result = isSorted(arr, 5);
    assert(result == true);
}

// Two additional self-designed test cases
void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true); // an empty array is trivially sorted
}

void testAllEqualValues() {
    int arr[] = {4, 4, 4, 4};
    bool result = isSorted(arr, 4);
    assert(result == true); // non-decreasing allows equal elements
}

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualValues();

    cout << "All tests passed!" << endl;
    return 0;
}

// ---- Implementation (written after the tests) ----
bool isSorted(const int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}