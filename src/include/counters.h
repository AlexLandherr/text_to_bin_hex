#include <string>

#ifndef COUNTERS_H
#define COUNTERS_H

namespace counters {
    int bit_count(const std::string &str);

    int byte_count(const std::string &str);

    int hex_count(const std::string &str);
}

#endif