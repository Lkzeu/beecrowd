#include <iostream>

void printArray(int arr[], int size, const std::string& arr_name) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr_name << "[" << i << "] = " << arr[i] << '\n'; // (im)par[i] = x
    }
}

// insert number into array and reset the counter when the array is filled up
void insert(int number, int arr[], int& counter, int size, const std::string& arr_name) {
    arr[counter] = number;
    ++counter; 
    if(counter == size) {
        printArray(arr, size, arr_name);
        counter = 0;
    }
}

int main() {
    constexpr int array_size{ 5 };
    int even[array_size]{};
    int odd [array_size]{};

    int evens_counter{ 0 };
    int odds_counter { 0 };
    for(int input = 0; input < 15; ++input) {
        int number{};
        std::cin >> number;
        if(number % 2 == 0) {
            insert(number, even, evens_counter, array_size, "par");
            continue;
        }
        insert(number, odd, odds_counter, array_size, "impar");   
    }
    printArray(odd, odds_counter, "impar");
    printArray(even, evens_counter, "par");
    return 0;
}