#include <bits/stdc++.h>

template<typename T>
std::pair<T, T> mnmx(T a, T b) {
    if (a < b) return {a, b};
    return {b, a};
}

template<typename T>
void print(T a, T b) {
    auto tmp = mnmx(a, b);
    std::cout << tmp.first << " " << tmp.second << std::endl;
}   

template<typename T>
T getInteger(const std::string& prompt, const std::string& reprompt) {
    while (true) {
        std::cout << prompt << std::endl;
        std::string line;
        T res;
        char remain; 
        if (!getline(std::cin, line)) {
            throw std::domain_error("error");
        } 
        std::istringstream iss(line);
        if (iss >> res && !(iss >> remain)) {
            return res;
        }
        std::cout << reprompt << std::endl;
    }
} 

int main() {

    //std::string a{"Avery"}, b{"Anna"}; // string

    //print(a, b);
    // 显式实例化
    //auto [x, y] = mnmx<double>(4.2, 7.9); 

    //print("Avery", "Anna");  // C-string

    double val1 = getInteger<double>("enter val", "re");
    std::cout << val1 << std::endl;

    return 0;
}