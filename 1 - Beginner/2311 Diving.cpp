#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <utility>
#include <iomanip>
#include <string>

struct Competitor
{
    std::string name{};
    double final_score{};
};

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("test.txt", "r", stdin);
    #endif

    std::array<Competitor, 100> competitors{};
    int num_comp{};
    std::cin >> num_comp;
    for (int i{ 0 }; i < num_comp; i++)
    {
        std::cin >> competitors[i].name;
        
        double dive_difficulty{};
        std::cin >> dive_difficulty;
        
        std::array<double, 7> scores{};
        for (int j{ 0 }; j < 7; j++)
            std::cin >> scores[j];
        
        auto begin{ scores.begin() };
        auto end  { scores.end()   };
        std::sort(begin, end);
        double score_sum{ std::accumulate(std::next(begin), std::prev(end) , 0.0) };
        competitors[i].final_score = score_sum * dive_difficulty;
    }

    for (int i{ 0 }; i < num_comp; i++)
    {
        std::cout << std::fixed << std::setprecision(2)
            << competitors[i].name << ' '
            << competitors[i].final_score
            << '\n';
    }
    return 0;
}