#include <string>

#ifndef CONVERTERS_H
#define CONVERTERS_H

namespace conv {
    std::string to_binary_str(const std::string &words, bool with_spaces = false);

    std::string to_hexadecimal_str(const std::string &words, bool with_spaces = false);
}

#endif