#include <iostream>
#include <vector>
#include <utility> // for std::pair

std::vector<std::pair<int, double>> createPairVector() {
    std::vector<std::pair<int, double> > result;
    result.push_back(std::make_pair(42, 3.14));
    result.push_back(std::make_pair(10, 2.71));
    return result;
}

int main() {
    std::vector<std::pair<int, double> > pairVector = createPairVector();

    std::cout << "Pair Vector elements:" << std::endl;
    for (const auto& pair : pairVector) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }

    return 0;
}
