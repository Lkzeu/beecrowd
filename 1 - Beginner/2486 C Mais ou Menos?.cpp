#include <unordered_map>
#include <iostream>
#include <string>

int main()
{
    std::unordered_map<std::string, int> table_rich_vitamin {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34},
    };

    int tests{};
    while (std::cin >> tests && tests != 0)
    {
        int daily_intake = 0;
        for (int i{ 0 }; i < tests; i++)
        {
            int amount_food{};
            std::string food;
            std::cin >> amount_food;
            std::getline(std::cin >> std::ws, food);

            daily_intake += (amount_food * table_rich_vitamin[food]);
        }

        if (daily_intake < 110) {
            std::cout << "Mais " << 110 - daily_intake << " mg\n";
        } else if (daily_intake <= 130) {
            std::cout << daily_intake << " mg\n";
        } else {
            std::cout << "Menos " << daily_intake - 130 << " mg\n";
        }
    }
}