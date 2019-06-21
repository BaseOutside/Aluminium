#include <iostream>
#include <vector>

#include "aluminium/hello.hpp"
#include "aluminium/loading.hpp"
#include "aluminium/math/consts.hpp"
#include "aluminium/sort/quick.hpp"

int main() {
    aluminium::hello();
    //aluminium::print_loading("hello world", 1000, 50);
    std::cout << std::endl;
    std::cout << aluminium::math::pi(3) << std::endl;
    std::vector<int> a{13, 32, 272, 2, 2223, 22};
    aluminium::sort::quick_sort(a.begin(), a.end());
    for (auto i : a) {
        std::cout << i << std::endl;
    }

    return 0;
}
