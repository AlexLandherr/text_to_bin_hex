#include <string>

#ifndef COUNTERS_H
#define COUNTERS_H

namespace counters {
    int bit_count(std::string str);

    int byte_count(std::string str);

    int hex_count(std::string str);
}

#endif