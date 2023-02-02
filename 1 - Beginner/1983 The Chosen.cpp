#include <iostream>

struct Student
{
    int registration{};
    double note{};
};

int main()
{
    int number_of_students{};
    std::cin >> number_of_students;

    Student* students = new Student[number_of_students]{};
    Student* best_student{ &students[0] };
    for (int i = 0; i < number_of_students; ++i)
    {
        std::cin >> students[i].registration;
        std::cin >> students[i].note;
        if (students[i].note > best_student->note)
        {
            best_student = &students[i];
        }
    }

    if(best_student->note >= 8.00) {
        std::cout << best_student->registration << '\n';
    } else {
        std::cout << "Minimum note not reached\n";
    }
    
    delete[] students;
    return 0;
}