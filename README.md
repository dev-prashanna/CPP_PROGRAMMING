# CPP_PROGRAMMING

C++ practice programs for DSA fundamentals.

## Programs

| File | Description |
|------|-------------|
| `matrix_multiplication.cpp` | Multiplies two matrices with dimension validation (O(n³) triple loop) |
| `sort_numbers.cpp` | Reads N integers from stdin and sorts them using `std::sort` |

## Build & Run

Requires a C++ compiler such as `g++`.

```bash
# Matrix multiplication
g++ -std=c++17 -Wall -o matrix_multiplication matrix_multiplication.cpp
./matrix_multiplication

# Sort numbers
g++ -std=c++17 -Wall -o sort_numbers sort_numbers.cpp
./sort_numbers
```

## Example Output

**matrix_multiplication.cpp**
```
Resultant matrix C:
38 58
59 91
```

**sort_numbers.cpp**
```
Enter number of elements: 5
Enter 5 numbers: 9 2 7 1 5
Sorted: 1 2 5 7 9
```
