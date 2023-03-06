#include "include/converters.h"
#include <bitset>
#include <string>
#include <sstream>
#include <cctype>
#include <ios>
#include <iomanip>

namespace conv {
    std::string to_binary_str(std::string words) {
        std::string binaryString = "";
        for (char& _char : words) {
            binaryString += std::bitset<8>(_char).to_string();
        }
        return binaryString;
    }

    std::string to_hexadecimal_str(std::string words) {
        std::stringstream str_stream;
        for (const auto &item : words) {
            str_stream << std::uppercase << std::hex << std::setw(2) << std::setfill('0') << +uint8_t(item);
        }
        
        return str_stream.str();
    }
}