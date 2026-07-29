#include <iostream>
#include <ranges>
//ONLY WITH g++ -std=c++20
namespace views = std::views;

int main() {
    for (int x : views::iota(1, 10)) {
        std::cout << x << ' '; // 0 1 2 3 4 5 6 7 8 9
    }
}