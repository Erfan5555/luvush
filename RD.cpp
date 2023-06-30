# include <iostream> // libary written there
using namespace std; // put that there.



int main (){

// by doing std :: you call cout funciton from the iostream libary 
// std::cout << "hello world"<<endl;

cout << "hello world"<<endl;

// to complie c++ files  g++ RD.cpp -o p.out
// to run ./p.out

// variables
// int for integer, float for decimles, string, char/

int arr[] = {2, 4, 5, 9, 2};

// the index starts at zero.

 cout <<"the number accessed is: "<< arr[0]<<endl;

// for loop , index starts at zero, we dont allow index to exceed 5, increase the index by 1.
for (int i=0; i<5; i++){
cout <<"the number accessed is: "<< arr[i]<<endl;
}

int i=0;
while ( i<5, i++){

    cout <<"the number accessed is: "<< arr[i]<<endl;
    //i++;
}

if (arr[1]==1){
    cout<<"array at index one is 1"<<endl;
}else{
    cout <<"array is not 1"<<endl;
}


// HEAP VS STACK MEMORY 
// Advantages of Stack Memory:

// Efficiency: Stack memory is managed automatically by the compiler. Memory allocation and deallocation for stack variables are handled efficiently with stack pointers, which makes it faster compared to dynamic memory allocation on the heap.
// Deterministic Lifetime: Stack variables have a well-defined lifetime that is tied to the scope in which they are declared. They are automatically deallocated when they go out of scope, eliminating the need for manual memory management.
// Memory Safety: The stack provides built-in memory safety by ensuring that variables are accessed within their valid lifetime. This reduces the chances of memory leaks and dangling pointers.
// Disadvantages of Stack Memory:

// Limited Size: The size of stack memory is usually limited, and it varies depending on the system. If you allocate too much memory on the stack or have deeply nested function calls, you might encounter a stack overflow error.
// Lack of Flexibility: The stack has a strict LIFO (Last-In, First-Out) structure, meaning variables can only be allocated and deallocated in a specific order. This limits the flexibility for dynamic memory management.
// Advantages of Heap Memory:

// Dynamic Memory Allocation: Heap memory allows dynamic allocation and deallocation of memory at runtime using functions like new and delete or malloc and free. This provides flexibility in managing memory resources.
// Greater Memory Capacity: Heap memory can grow or shrink as needed (within the limits of available system memory) and is generally larger than the stack. It allows you to allocate large amounts of memory for data structures, arrays, or complex objects.
// Disadvantages of Heap Memory:

// Slower Allocation and Deallocation: Dynamic memory allocation on the heap is relatively slower compared to stack memory due to the need for manual memory management and potential fragmentation issues.
// Manual Memory Management: Heap memory requires manual memory allocation and deallocation. If not managed properly, it can lead to memory leaks (unreleased memory) or dangling pointers (pointers that reference deallocated memory).
// Fragmentation: Over time, the heap can become fragmented as memory blocks are allocated and deallocated. Fragmentation can reduce the available contiguous memory space and potentially impact performance.



// intiliase pointer 
int* ptr;  

int n = 5; // we created in stack 

ptr = &n; // we are storing the address of n to the pointer.  by using "&" we are getting the address of n;

cout<<"THE VALUE OF N IS : "<< *ptr <<endl;


    int *array; // create a pointer of int
    int size; // create a variable to store the size of the array

   // get the size
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Allocate memory
    array = new int[size];

    std::cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++) {
        std::cin >> array[i];
    }

    std::cout << "Elements of the array are: ";
    for(int i=0; i<size; i++) {
        std::cout << array[i] << " ";
    }

    // Deallocate memory
    delete[] array;

    return 0;
}

