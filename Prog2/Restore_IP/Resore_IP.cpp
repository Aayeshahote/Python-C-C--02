#include <iostream>
#include <vector>
#include <string>

void backtrack(const std::string& s, int segments, std::string& current_ip, std::vector<std::string>& result) {
    // Base case: If all segments are formed and the entire string is consumed, add the current IP to the result
    if (segments == 4 && s.empty()) {
        result.push_back(current_ip.substr(0, current_ip.length() - 1));
        return;
    }

    // Base case: If all segments are formed but some part of the string is remaining, return
    if (segments == 4 || s.empty()) {
        return;
    }

    // Explore different choices for the current segment
    for (int i = 1; i <= 3 && i <= s.length(); i++) {
        std::string segment = s.substr(0, i);

        // Check for the validity of the segment
        if ((segment[0] == '0' && i > 1) || std::stoi(segment) > 255) {
            break;
        }

        // Recursively backtrack for the remaining string and next segment
        current_ip += segment + ".";
        backtrack(s.substr(i), segments + 1, current_ip, result);
        current_ip.erase(current_ip.length() - i - 1);
    }
}

std::vector<std::string> restoreIpAddresses(const std::string& s) {
    std::vector<std::string> result;
    std::string current_ip;

    backtrack(s, 0, current_ip, result);

    return result;
}

int main() {
    std::string s = "25525511135";
    std::vector<std::string> restored_ips = restoreIpAddresses(s);

    for (const std::string& ip : restored_ips) {
        std::cout << ip << std::endl;
    }

    return 0;
}

