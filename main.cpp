#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

//void cyclicShiftRight(std::vector<int>& vec, int K) {
//    int n = vec.size();
//    std::rotate(vec.rbegin(), vec.rbegin() + K, vec.rend());
//}
//void cyclicShiftLeft(std::vector<int>& vec, int K) {
//    int n = vec.size();
//    std::rotate(vec.begin(), vec.begin() + K, vec.end());
//}


int main() {
//    int K;
//    std::vector<int> L(10);
//
//    std::cout << "Enter K value (0 < K < 5): ";
//    std::cin >> K;
//    if (K <= 0 || K >= 5) {
//        std::cout << "Wrong K" << std::endl;
//        return 1;
//    }
//
//    std::cout << "Enter 10 element of L: ";
//    for (int i = 0; i < 10; ++i) {
//        std::cin >> L[i];
//    }
//
//    std::vector<int> firstHalf(L.begin(), L.begin() + 5);
//    cyclicShiftRight(firstHalf, K);
//    L.insert(L.end(), firstHalf.begin(), firstHalf.end());
//
//    std::vector<int> lastHalf(L.end() - 15, L.end() - 10);
//    cyclicShiftLeft(lastHalf, K);
//    L.insert(L.begin(), lastHalf.begin(), lastHalf.end());
//
//    L.erase(L.begin() + 10, L.end() - 10);
//
//    std::cout << "Changed list L: ";
//    for (const auto& elem : L) {
//        std::cout << elem << " ";
//    }
//    std::cout << std::endl;

    // #2

    std::vector<int> V;
    std::multimap<int, int> M;
    int num;

    std::cout << "Enter the elements of the vector (enter -1 to end input): ";
    while (std::cin >> num && num != -1) {
        V.push_back(num);
    }

    for (int el : V) {
        int key = el % 10;
        M.insert(std::make_pair(key, el));
    }

    std::cout << "Grouped elements in multimap M:" << std::endl;
    for (const auto& pair : M) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;}
 