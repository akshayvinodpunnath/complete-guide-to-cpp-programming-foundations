#include<iostream>
#include<string>

enum class team_role { Developer, QualityAssociate, Architect, ProductOwner, ProductManager };
enum class band {T1, T2, T3, T4};

struct team_members {
    std::string name;
    band band_assigned;
    team_role role ;
};

int main() {
    team_members team_member;
    team_member.name = "Tony";
    team_member.band_assigned = band::T2;
    team_member.role = team_role::Developer;

    std::cout << team_member.name << " is a " << (int) team_member.role << ". The person's band is: " << (int) team_member.band_assigned << std::endl;
    return 0;
}