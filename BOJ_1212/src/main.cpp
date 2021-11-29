#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string oct;
    cin >> oct;

    if ("0" == oct) {
        cout << "0";
        return 0;
    }

    reverse(oct.begin(), oct.end());
    auto n = static_cast<int>(oct.length());

    vector<string> cvt{ "000", "100", "010", "110", "001", "101", "011", "111" };

    ostringstream oss{};
    for (int i = 0; i < n; ++i)
    {
        oss << cvt[oct[i] - '0'];
    }

    string bin = oss.str();
    reverse(bin.begin(), bin.end());

    if ('0' == bin[0]) {
        auto f = bin.find('1');
        bin = bin.substr(f);
    }

    cout << bin;

    return 0;
}