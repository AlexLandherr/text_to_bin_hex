#include "include/converters.h"
#include <bitset>
#include <string>
#include <cctype>
#include <ios>

namespace conv {
    std::string to_binary_str(const std::string &words, bool with_spaces) {
        std::string bin_str = "";
        std::string space = ""; //No space to start with.
        if (with_spaces) {
            for (char c : words) {
                bin_str += space + std::bitset<8>(c).to_string(); //No space in first round.
                if (space.empty()) {
            	    space = " "; //Now we add a space
                }
            }
        } else {
            for (char c : words) {
                bin_str += std::bitset<8>(c).to_string();
            }
        }

        return bin_str;
    }

    std::string to_hexadecimal_str(const std::string &words, bool with_spaces) {
        std::string hex_str;
        std::string space = "";
        static const char digits[] = "0123456789ABCDEF";
        if (with_spaces) {
            for (unsigned char c : words) {
                hex_str += space;
                hex_str.push_back(digits[c >> 4]);
                hex_str.push_back(digits[c & 15]);
                if (space.empty()) {
                    space = " "; //Now we add a space.
                }
            }
        } else {
            for (unsigned char c : words) {
                hex_str.push_back(digits[c >> 4]);
                hex_str.push_back(digits[c & 15]);
            }
        }
        
        return hex_str;
    }
}