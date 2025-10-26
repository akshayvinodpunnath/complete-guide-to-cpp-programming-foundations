#include<iostream>

typedef double Score;

int main() {    
    Score player_score;
    Score team_score;
    std::cout << "Enter player score:";
    std::cin >> player_score;
    std::cout << "Enter team score:";
    std::cin >> team_score;
    std::cout << "Player Score: " << player_score << std::endl;
    std::cout << "Team Score: " << team_score << std::endl;
    return 0;
}