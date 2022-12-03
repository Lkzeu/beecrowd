#include <iostream>
#include <map>

int main() {
    std::map <std::string, std::string> ver_ave_category;
    ver_ave_category["carnivoro"] = "aguia";
    ver_ave_category["onivoro"] = "pomba";

    std::map <std::string, std::string> ver_mami_category;
    ver_mami_category["onivoro"] = "homem";
    ver_mami_category["herbivoro"] = "vaca";

    std::map <std::string, std::string> inver_ins_category;
    inver_ins_category["hematofago"] = "pulga";
    inver_ins_category["herbivoro"] = "lagarta";

    std::map <std::string, std::string> inver_anel_category;
    inver_anel_category["hematofago"] = "sanguessuga";
    inver_anel_category["onivoro"] = "minhoca";
    
    std::string vert{}, type{}, category{};
    std::getline(std::cin >> std::ws, vert);
    std::getline(std::cin >> std::ws, type);
    std::getline(std::cin >> std::ws, category);

    if (vert == "vertebrado") {
        if (type == "ave") {
            std::cout << ver_ave_category[category] << '\n';
        }
        else {
            std::cout << ver_mami_category[category] << '\n'; 
        }
    }
    else {
        if (type == "inseto") {
            std::cout << inver_ins_category[category] << '\n';
        }
        else {
            std::cout << inver_anel_category[category] << '\n'; 
        }
    }
    return 0;
}