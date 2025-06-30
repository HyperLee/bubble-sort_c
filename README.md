# Bubble Sort Implementation in C++

A comprehensive implementation of the bubble sort algorithm written in C++. This project demonstrates one of the fundamental sorting algorithms with clear, readable code and detailed documentation.

## 📖 About Bubble Sort

Bubble Sort is one of the simplest sorting algorithms to understand and implement. It works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

The algorithm gets its name from the way smaller elements "bubble" to the top (beginning) of the list, just like air bubbles rising to the surface of water.

## ✨ Features

- **Simple Implementation**: Clean and readable C++ code
- **Educational Purpose**: Perfect for learning sorting algorithms
- **Console Output**: Displays both original and sorted arrays
- **Fixed Array Size**: Demonstrates sorting with a predefined array of 10 elements
- **In-Place Sorting**: Sorts the array without requiring additional memory space

## 🔧 Prerequisites

To compile and run this program, you need:
- A C++ compiler (GCC, Clang, or similar)
- Basic knowledge of command line operations

## 🚀 How to Compile and Run

### Compilation
```bash
g++ -o bubble_sort "bubble sort.cpp"
```

### Execution
```bash
./bubble_sort
```

### One-line Command
```bash
g++ -o bubble_sort "bubble sort.cpp" && ./bubble_sort
```

## 📊 Example Output

When you run the program, you'll see:

```
original array:
2 4 6 7 80 66 44 99 100 3 
bubble sort:
2 3 4 6 7 44 66 80 99 100
```

## 🏗️ Code Structure

### Main Components

1. **Headers and Definitions**
   ```cpp
   #include <stdio.h>
   #define SIZE 10
   ```
   - Uses standard I/O library for printf function
   - Defines array size as a constant for easy modification

2. **Array Initialization**
   ```cpp
   int a[SIZE] = {2,4,6,7,80,66,44,99,100,3};
   ```
   - Creates an array with 10 predefined integers
   - Mix of sorted and unsorted elements for demonstration

3. **Original Array Display**
   - Prints the unsorted array to show the initial state

4. **Bubble Sort Algorithm**
   ```cpp
   for(pass = 1; pass < SIZE; pass++)
   {
       for(i = 0; i < SIZE - 1; i++)
       {
           if(a[i] > a[i + 1])
           {
               // Swap elements
               hold = a[i];
               a[i] = a[i + 1];
               a[i + 1] = hold;
           }
       }
   }
   ```
   - **Outer Loop**: Controls the number of passes (SIZE-1 passes needed)
   - **Inner Loop**: Compares adjacent elements in each pass
   - **Swapping Logic**: Uses a temporary variable to exchange elements

5. **Sorted Array Display**
   - Prints the final sorted array

## ⚡ Algorithm Details

### How It Works
1. **Pass 1**: Compare each pair of adjacent elements and swap if necessary
2. **Pass 2**: Repeat the process, but the largest element is now in its correct position
3. **Continue**: Repeat until no more swaps are needed
4. **Result**: Array is completely sorted in ascending order

### Step-by-Step Example
Starting array: `[2, 4, 6, 7, 80, 66, 44, 99, 100, 3]`

**Pass 1**: `[2, 4, 6, 7, 66, 44, 80, 99, 3, 100]` - 100 bubbles to the end
**Pass 2**: `[2, 4, 6, 7, 44, 66, 80, 3, 99, 100]` - 99 moves to correct position
**...and so on until fully sorted**

## 📈 Complexity Analysis

| Complexity Type | Value | Description |
|----------------|--------|-------------|
| **Time Complexity (Worst Case)** | O(n²) | When array is reverse sorted |
| **Time Complexity (Best Case)** | O(n²) | This implementation doesn't optimize for already sorted arrays |
| **Time Complexity (Average Case)** | O(n²) | General performance expectation |
| **Space Complexity** | O(1) | Only uses a constant amount of extra memory |

### Performance Characteristics
- **Stable**: Equal elements maintain their relative order
- **In-Place**: Sorts the array without additional memory allocation
- **Simple**: Easy to understand and implement
- **Inefficient**: Not suitable for large datasets due to O(n²) complexity

## 📁 File Structure

```
bubble-sort_c/
├── README.md           # This documentation file
├── bubble sort.cpp     # Main source code file
└── .git/              # Git repository files
```

## 🎯 Educational Value

This implementation is excellent for:
- **Learning Algorithms**: Understanding how sorting works
- **C++ Practice**: Basic syntax, loops, and arrays
- **Algorithm Analysis**: Studying time and space complexity
- **Debugging Skills**: Tracing through algorithm execution

## 🔍 Possible Improvements

While this is a basic implementation, it could be enhanced with:
- **Optimization**: Early termination when array becomes sorted
- **Dynamic Size**: Accept user input for array size and elements
- **Different Data Types**: Template implementation for various data types
- **Performance Metrics**: Timing and comparison counting
- **Visualization**: Step-by-step sorting display

## 📚 Learning Resources

To learn more about bubble sort and sorting algorithms:
- Study the comparison-based sorting algorithm family
- Compare with other O(n²) algorithms like selection sort and insertion sort
- Explore more efficient algorithms like merge sort and quick sort
- Practice implementing optimized versions

## 🤝 Contributing

Feel free to fork this repository and submit improvements or variations of the bubble sort implementation!

---

**Note**: This implementation prioritizes clarity and educational value over performance optimization.
