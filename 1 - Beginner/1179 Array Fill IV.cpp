#include <iostream>
#include <iomanip>

void printArray(int arr[], int size, const std::string& arr_name) 
{
    for(int i = 0; i < size; ++i) {
        std::cout << arr_name << "[" << i << "] = " << arr[i] << '\n';
    }
}

void assignValue(int arr[], int& counter, int size, int number, const std::string& arr_name)
{
    arr[counter] = number;
    ++counter; 
    if(counter == size) {
        printArray(arr, size, arr_name);
        counter = 0;
    }
}

int main() 
{
    constexpr int size{ 5 };
    int even[size]{};
    int odd [size]{};
    
    int evens_counter{ 0 };
    int odds_counter { 0 };
    for(int input = 0; input < 15; ++input)
    {
        int number{};
        std::cin >> number;

        if(number % 2 == 0) {
            assignValue(even, evens_counter, size, number, "par");
            continue;
        }
        assignValue(odd, odds_counter, size, number, "impar");
        
    }

    if (odds_counter != 0) {
        printArray(odd, odds_counter, "impar");
    }

    if (evens_counter != 0) {
        printArray(even, evens_counter, "par");
    }
    return 0;
}