#include "include/converters.h"
#include <string>

namespace counters {
    int bit_count(const std::string &str) {
        return str.size() * 8;
    }

    int byte_count(const std::string &str) {
        return str.size();
    }

    int hex_count(const std::string &str) {
        return conv::to_hexadecimal_str(str).length();
    }
}