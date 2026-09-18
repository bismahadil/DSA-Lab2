#include <iostream>
using namespace std;

// Part 1: prints the address and the value pointed to
void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value at that location: " << *ptr << endl;
}

int main() {
    // Part 2a: int on the stack
    int iValue = 42;
    cout << "-- Stack variable --" << endl;
    analyze_pointer(&iValue);

    // Part 2b: int on the heap
    int *heapValue = new int;
    *heapValue = 100;
    cout << "\n-- Heap variable --" << endl;
    analyze_pointer(heapValue);

    delete heapValue;
    return 0;
}