#include "include/checkers.h"
#include <string>

namespace checkers {
    //Used for ASCII with 7 bits.
    bool is_ascii_7_bit(const int c) {
        return c >= 0 && c < 128;
    }

    //Checks if a std::string consists only of character values that are valid for 7-bit ASCII.
    bool pure_ascii_7_bit(const std::string &str) {
        for (char c : str) {
            if (!is_ascii_7_bit(c)) {
                return false;
            }
        }
        return true;
    }
}