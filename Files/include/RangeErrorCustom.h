#ifndef RANGE_ERROR_CUSTOM_H
#define RANGE_ERROR_CUSTOM_H

#include <stdexcept>
#include <string>

using namespace std;

class RangeErrorCustom : public runtime_error {
public:
    explicit RangeErrorCustom(const string& message) 
        : runtime_error(message) { 
    }
};

#endif // RANGE_ERROR_CUSTOM_H