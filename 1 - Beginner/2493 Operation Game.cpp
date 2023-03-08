#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <array>

struct Expression
{
    int left{};
    int right{};
    int result{};
};

int add(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

bool isPossible(const Expression& exp)
{
    int (*functPtr[3])(int, int){ add, subtraction, multiplication };
    for (const auto& fun: functPtr)
    {
        if (exp.result == fun(exp.left, exp.right))
            return true;
    }
    return false;
}

auto getArithmeticFunction(char operation) -> int(*)(int, int)
{
    switch (operation)
    {
        case '+':    return add;
        case '-':    return subtraction;
        case '*':    return multiplication;
    }
    return nullptr; // player choose I;
}

Expression getExpression(std::string s)
{
    std::stringstream ss(s);

    int left, right, result;
    char garbage;
    ss >> left >> right >> garbage >> result;

    return {left, right, result};
}

int main()
{
    int number_expressions{};
    while (std::cin >> number_expressions)
    {
        std::string expressions[50]{};
        for (int i { 0 }; i < number_expressions; i++)
            std::getline(std::cin >> std::ws, expressions[i]);

        std::string names_disqualified[50]{};
        int counter_disqualified{ 0 };
        for (int i { 0 }; i < number_expressions; i++)
        {
            std::string name{};
            int exp_index{};
            char operation{};
            std::cin >> name >> exp_index >> operation;
            
            Expression exp { getExpression(expressions[exp_index - 1]) };
            bool has_possible_result{ isPossible(exp) };
            
            if (operation == 'I' && !has_possible_result)
                continue;

            auto func{ getArithmeticFunction(operation) };
            if (!func || exp.result != func(exp.left, exp.right))
                names_disqualified[counter_disqualified++] = name;
        }

        if (!counter_disqualified)
        {
            std::cout << "You Shall All Pass!\n";
        }
        else if (number_expressions == counter_disqualified)
        {
            std::cout << "None Shall Pass!\n";
        }
        else 
        {
            std::sort(names_disqualified, names_disqualified + counter_disqualified);
            std::cout << names_disqualified[0];
            for (int i{ 1 }; i < counter_disqualified; i++)
            {
                std::cout << ' ' << names_disqualified[i];
            }
            std::cout << '\n';
        }
    }
    return 0;
}