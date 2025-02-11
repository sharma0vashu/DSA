class Solution {
public:
    string removeOccurrences(string s, string part) {
      size_t pos;
    while ((pos = s.find(part)) != std::string::npos) { // Find leftmost occurrence
        s.erase(pos, part.length()); // Remove the found occurrence
    }
    return s;
    }
};