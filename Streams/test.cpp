#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStateBits(const istream& iss);

void stream1() {
     // 构造的时候位置指针在最左侧
    ostringstream oss("123");

    // 或者这样构造  初始位置指针在末尾
    ostringstream oss1("123", ostringstream::ate);
    cout << "old oss string " << oss.str() << "\n";
    // 写入之后指针在最右侧
    // 从指针位置开始写入
    oss << "en";
    oss1 << "en";
    cout << "new oss1 string " << oss1.str() << "\n";
    oss << "d123";
    cout << "new oss string " << oss.str() << "\n";
}

void stream2() {

    istringstream iss("16.9 Ounces");

    double amount;
    string unit;
    // 返回流本身 
    iss >> amount >> unit;
    cout << amount / 2 << " " << unit << endl;
}

int stringToInteger(const string& s) {
    istringstream iss(s);   
    printStateBits(iss);
    int res;
    iss >> res;

    printStateBits(iss);

    return res;

}

void printStateBits(const istream& iss) {
    cout << "State bits: ";
    cout << (iss.good() ? "G" : "-");
    cout << (iss.fail() ? "F" : "-");
    cout << (iss.eof() ? "E" : "-");
    cout << (iss.bad() ? "B" : "-") << endl;
}
    

int main() {
   // stream2();

    cout << stringToInteger("a45") << endl;
    return 0;
}