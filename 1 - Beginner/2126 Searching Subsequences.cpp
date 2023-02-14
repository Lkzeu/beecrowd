#include <iostream>

int main()
{
    std::string subsequence{};
    std::string sequence{};
    int case_number{ 1 };
    while(std::cin >> subsequence >> sequence)
    {
        const int len_sequence{ static_cast<int>(sequence.length()) };
        const int len_sub_seq{ static_cast<int>(subsequence.length()) };
        
        int pos_last_subseq { 0 };
        int number_subsequences{ 0 };
        for (int position = 0; position < len_sequence; ++position)
        {
            if (sequence.at(position) == subsequence.at(0))
            {
                if (sequence.substr(position, len_sub_seq) == subsequence)
                {
                    ++number_subsequences;
                    pos_last_subseq = position + 1;
                    position += len_sub_seq - 1;
                }
            }
        }

        std::cout << "Caso #" << case_number++ << ":\n";
        if (number_subsequences)
        {
            std::cout << "Qtd.Subsequencias: " 
                      << number_subsequences << '\n'
                      << "Pos: " 
                      << pos_last_subseq << "\n\n";
        } 
        else
        {
            std::cout << "Nao existe subsequencia\n\n";
        }
    }
        
    return 0;
}