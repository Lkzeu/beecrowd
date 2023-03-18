#include <iostream>

int main()
{
    int guests{};
    int min_height{};
    int max_height{};
    
    while (std::cin >> guests >> min_height >> max_height)
    {
        int allowed_counter{ 0 };
        for (int i = 0; i < guests; i++)
        {
            int guest_height{};
            std::cin >> guest_height;
            
            if (guest_height >= min_height &&
                guest_height <= max_height)
            {
                allowed_counter += 1;
            }
        }
        std::cout << allowed_counter << '\n';
    }
    return 0;
}           
