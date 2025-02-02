#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

int countValidSkillTrees(const std::string& skill, const std::vector<std::string>& skill_trees) {
    int validCount = 0;

    for (const auto& tree : skill_trees) {
        std::unordered_set<char> learnedSkills;
        size_t skillIndex = 0;
        bool isValid = true;

        for (char c : tree) {
            if (skill.find(c) != std::string::npos) {
                if (c == skill[skillIndex]) {
                    learnedSkills.insert(c);
                    skillIndex++;
                } else {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid) {
            validCount++;
        }
    }

    return validCount;
}

int main() {
    std::string skill = "CBD";
    std::vector<std::string> skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};

    int result = countValidSkillTrees(skill, skill_trees);
    std::cout << "Number of valid skill trees: " << result << std::endl;

    return 0;
}