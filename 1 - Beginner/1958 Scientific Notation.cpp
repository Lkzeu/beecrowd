#include <iostream>
#include <iomanip>

// fixed +-0.0000... when -0 were given in input
// tried using value < 0, but it want to -0.0000.
// tried using value > 0, but it want to +0.0000. aswell!
struct Signed_Value
{
    char sign{};
    double value{};
};

Signed_Value get_values()
{
    std::string temp{};
    std::cin >> temp;

    if(temp.at(0) == '-') 
    {
        return {'-', std::stod(temp.substr(1))};
    }
    return {'+', std::stod(temp)};
}

int main()
{
    const Signed_Value s_value{ get_values() };

    std::cout << std::setprecision(4) << std::uppercase << std::scientific;
    std::cout << s_value.sign << s_value.value << '\n';
    
    return 0;
}