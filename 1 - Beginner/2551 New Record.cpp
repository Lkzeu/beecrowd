#include <iostream>
#include <vector>

int main()
{
    int days_training{};
    while (std::cin >> days_training)
    {
        std::vector<int> records;
        records.reserve(30);
        double km_record{ -1 };
        for (int i = 0; i < days_training; i++)
        {
            int min;
            int km;
            std::cin >> min >> km;
            
            double avg_dist_run { km / static_cast<double>(min) };
            if (avg_dist_run > km_record)
            {
                km_record = avg_dist_run;
                records.push_back(i + 1);
            }
        }

        for (const auto& v: records)
        {
            std::cout << v << '\n';
        }
    }
    return 0;
}
