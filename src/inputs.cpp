#include <iostream>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

using namespace std;

void stdin_loop(void handler(string))
{
    string line = "";
    while (getline(cin, line))
    {
        handler(line);
    }
}

void handle_line(string line)
{
    vector<string> input_vector;
    boost::split(input_vector, line, [](char c) { return c == ' '; });

    for_each(input_vector.begin(), input_vector.end(), [](string item) {
        cout << item << endl;
    });
}

int main()
{
    stdin_loop(handle_line);
    return 0;
}
