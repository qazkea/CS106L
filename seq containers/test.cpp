#include <bits/stdc++.h>

using ll = long long;

int main() {    
    
    std::map<int, int> mp;
    mp[3] = 1;

    std::cout << mp.at(3) << "\n";

    auto t = std::make_pair(1, 3);
    std::get<0>(t) = std::get<1>(t);
    auto [x, y] = t;
    std::cout << x << " " << y << "\n";
    
    std::deque<int> a(50);

    std::cout << a[0] << "\n";

    return 0;
}       