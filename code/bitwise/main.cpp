#include <iostream>
#include <limits>

template <typename T>
std::string int_as_number(T val)
{
    return std::to_string(static_cast<long long>(val));
}

template <typename destination_type, typename value_type>
destination_type convert_to_unsigned(value_type value)
{
    std::cout << "dest. max val: "
              << int_as_number(std::numeric_limits<destination_type>::max())
              << '\n';

    std::cout << "dest. min val: "
              << int_as_number(std::numeric_limits<destination_type>::min())
              << '\n';

    auto bits = std::numeric_limits<destination_type>::digits;
    std::cout << "width (n) = " << bits << '\n';

    auto _2_pow_bits = 1ull << bits;
    std::cout << "2^n = " << _2_pow_bits << '\n';

    auto retval = value % _2_pow_bits;
    std::cout << "retval = " << retval << '\n';

    return value % _2_pow_bits;
}

int main()
{
    using destination_type = uint8_t;
    int value = -1;

    std::cout << '\n'
              << int_as_number(convert_to_unsigned<destination_type>(value))
              << " "
              << int_as_number(static_cast<destination_type>(value));

    return 0;
}