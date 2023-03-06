#include "include/converters.h"
#include "include/counters.h"
#include <iostream>
#include <string>

int main() {
    std::string text = "Alex Landherr";
    std::cout << "Original text is: " << text << '\n';
    std::cout << "text bit count: " << counters::bit_count(text) << '\n';
    std::cout << "text byte count: " << counters::byte_count(text) << '\n';
    std::cout << "text to binary string: " << conv::to_binary_str(text) << '\n';
    std::cout << "text to hexadecimal string: " << conv::to_hexadecimal_str(text) << '\n';
    std::cout << "text hex string length: " << counters::hex_count(text) << '\n';

    return 0;
}