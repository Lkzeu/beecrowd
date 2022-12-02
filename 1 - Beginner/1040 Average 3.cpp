#include <iostream>
#include <iomanip>

double getGrade() {
    double grade{};
    std::cin >> grade;
    return grade;
}

void print_info(std::string description, const double average, std::string message) {
    std::cout << description << average << '\n';
    std::cout << message << '\n';
}

void do_exam(const double average) {
    const double exam_grade{ getGrade() };
    const double result {(exam_grade + average) / 2};
    
    if (result >= 5.0) {
        print_info("Nota do exame: ", exam_grade, "Aluno aprovado.");
    }
    else {
        print_info("Nota do exame: ", exam_grade, "Aluno reprovado.");
    }

    std::cout << "Media final: " << result << '\n';
}

int main() {
    const double grade1{ getGrade() * 2 };
    const double grade2{ getGrade() * 3 };
    const double grade3{ getGrade() * 4 };
    const double grade4{ getGrade() * 1 };

    const double average{ (grade1 + grade2 + grade3 + grade4) / 10 };
    std::cout << std::setprecision(1) << std::fixed;
    if (average >= 7.0) {
        print_info("Media: ", average, "Aluno aprovado.");
    }
    else if (average >= 5.0) {
        print_info("Media: ", average, "Aluno em exame.");
        do_exam(average);
    }
    else {
        print_info("Media: ", average, "Aluno reprovado.");
    }

    return 0;
}