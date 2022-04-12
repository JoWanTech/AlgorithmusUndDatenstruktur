#include <iostream>
#include "Calculations/PraefixSum.h"

int main() {
    PraefixSum ps;
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::cout << "[#] " << ps.sum(arr, std::size(arr)) << std::endl;
    return 0;
}
