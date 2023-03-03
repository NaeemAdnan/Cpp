#include <iostream>
#include <map>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::map<std::string, int> scores;
    std::string name;
    int score;
    for (int i = 0; i < n; i++) {
        std::cin >> name >> score;
        scores[name] += score;
    }
    std::string winner = "";
    int maxScore = -1;
    for (auto &person : scores) {
        if (person.second > maxScore) {
            maxScore = person.second;
            winner = person.first;
        }
    }
    std::cout << "The winner is " << winner << " with " << maxScore << " points" << std::endl;
    return 0;
}
