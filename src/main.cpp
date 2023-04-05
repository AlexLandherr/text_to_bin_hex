#include "include/converters.h"
#include "include/counters.h"
#include "include/checkers.h"
#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string text;
    while (true) {
        std::cout << "Text to convert: ";
        std::getline(std::cin, text);
        bool is_pure_ascii_7_bit = checkers::pure_ascii_7_bit(text);
        std::cout << "Pure 7-bit ASCII?: " << std::boolalpha << is_pure_ascii_7_bit << std::endl;
        if (is_pure_ascii_7_bit) {
            break;
        } else if (!std::cin) {
            std::cin.clear(); //Resets error state for std::cin.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Flushes std::cin buffer and removes bad input.
            std::cerr << "Something went wrong with the input!" << '\n';
        } else {
            std::cerr << "You entered a string with a non-ASCII character!" << '\n';
        }
    }
    
    std::cout << '\n';

    std::cout << "    ****    " << '\n';
    std::cout << "Original text is: '" << text << "'" << '\n';
    std::cout << '\n';
    std::cout << " **** Binary & Hexadecimal **** " << '\n';
    std::cout << "Binary string (no spaces): " << conv::to_binary_str(text) << '\n';
    std::cout << "Binary string (with spaces): " << conv::to_binary_str(text, true) << '\n';
    std::cout << '\n';
    std::cout << "Hexadecimal string (no spaces): " << conv::to_hexadecimal_str(text) << '\n';
    std::cout << "Hexadecimal string (with spaces): " << conv::to_hexadecimal_str(text, true) << '\n';
    std::cout << '\n';
    std::cout << " **** Lengths **** " << '\n';
    std::cout << "Bit count: " << counters::bit_count(text) << '\n';
    std::cout << "Byte count: " << counters::byte_count(text) << '\n';
    std::cout << "Hex string length (no spaces): " << counters::hex_count(text) << '\n';

    return 0;
}