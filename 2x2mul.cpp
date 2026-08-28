#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> M = {
        {10, 20, 30},
        {40, 50, 60}
    };

    for (const auto& row : M) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}