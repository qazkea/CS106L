#include <bits/stdc++.h>
using namespace std;

void test1() {
    multimap<int, int> mp;    
    mp.insert(make_pair(1, 1));
    mp.insert(make_pair(1, 2));

    map<int, int> mp1;
    mp1.insert(make_pair(1, 1));    
    auto it = mp.find(1);

    cout << it->second << "\n";
    
}  

void test2() {
    set<int> s{3, 1, 4, 2, 6};
    cout << s.count(3) << "\n";
    auto it = find(s.begin(), s.end(), 3);  // O(n)
    auto it1 = s.find(3);// O(logn)
    auto it3 = lower_bound(s.begin(), s.end(), 3); // set不支持随机访问迭代器  O(n)
    auto it4 = s.lower_bound(3); // O(logn)
    //cout << *it << "\n";
}

void test3() {
    vector<int> vec(5);
    auto it1 = vec.begin(), it2 = vec.begin();

    for (int i = 0; i < 5; i++) {
        *it1 = i + 1;
        *it2 = i + 2;
        it1++;
        it2++;
    }

}

void test4() {
    vector<int> q{3, 2, 4, 1, 5};
    auto it = q.begin() + 2;
    q.erase(q.begin() + 1);
    if (it != q.end()) {
        cout << *it << "\n";
    } else {
        cout << "invalid\n";
    }
}

int main() { 
    test4();

    return 0;
} 