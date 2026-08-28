#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums;
    int n;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    std::sort(nums.begin(), nums.end());

    std::cout << "Sorted: ";
    for (int x : nums) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
