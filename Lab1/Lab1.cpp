// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    string s = "";
    for (int i = 1; i <= n; ++i)
        s += i + 48;
    bool b = true;
    for (int i = 0; i < s.size() - 1; ++i) {
        int t1 = s[i] - 48;
        int t2 = s[i + 1] - 48;
        if (abs(t1 - t2) > k)
            b = false;
    }
    if (b)
        ++res;
    while (next_permutation(s.begin(), s.end())) {
        b = true;
        for (int i = 0; i < s.size() - 1; ++i) {
            int t1 = s[i] - 48;
            int t2 = s[i + 1] - 48;
            if (abs(t1 - t2) > k)
                b = false;
        }
        if (b)
            ++res;
    }
    cout << res;
    return 0;
}