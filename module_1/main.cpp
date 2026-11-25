// main.cpp
#include <iostream>
#include "utils.hpp"
int main() {
    double dt = 0.01;           // sampling time [s]
    std::cout << "Loop a " << 1.0 / dt << " Hz\n";
    std::cout << "90 degrees in rad is " << deg2rad(90) <<"\n";
    return 0;
}