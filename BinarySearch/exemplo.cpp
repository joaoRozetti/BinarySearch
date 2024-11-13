#include <iostream>
#include <vector>
#include <algorithm> // para std::sort

bool binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    std::sort(arr.begin(), arr.end()); // Certifique-se de que o vetor está ordenado

    int target = 7;
    if (binarySearch(arr, target)) {
        std::cout << "Elemento encontrado!" << std::endl;
    } else {
        std::cout << "Elemento não encontrado." << std::endl;
    }

    return 0;
}
