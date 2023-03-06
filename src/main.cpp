#include "include/converters.h"
#include "include/counters.h"
#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string text;
    while (true) {
        std::cout << "Text to convert: ";
        std::getline(std::cin, text);
        if (std::cin) {
            break;
        } else if (!std::cin) {
            std::cin.clear(); //Resets error state for std::cin.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Flushes std::cin buffer and removes bad input.
            std::cerr << "Byte value was out of range!" << '\n';
        }
    }

    std::cout << "    ****    " << '\n';
    std::cout << "Original text is: " << text << '\n';
    std::cout << " **** Binary & Hexadecimal **** " << '\n';
    std::cout << "Binary string: " << conv::to_binary_str(text) << '\n';
    std::cout << "Hexadecimal string: " << conv::to_hexadecimal_str(text) << '\n';
    std::cout << '\n';
    std::cout << " **** Lengths **** " << '\n';
    std::cout << "Bit count: " << counters::bit_count(text) << '\n';
    std::cout << "Byte count: " << counters::byte_count(text) << '\n';
    std::cout << "Hex string length: " << counters::hex_count(text) << '\n';

    return 0;
}