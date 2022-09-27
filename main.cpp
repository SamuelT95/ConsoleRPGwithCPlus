#include <iostream>
#include "core.hpp"

using namespace std;
void swap(int& first, int* second) {
    int tmp{first};
    first = *second;
    *second = tmp;
}

 int main() {
    Core core;
    return 0;
}
