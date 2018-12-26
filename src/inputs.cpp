#include <iostream>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>

using namespace std;

vector<int> handle_line(string line)
{
    vector<string> input_vector;
    boost::split(input_vector, line, [](char c) { return c == ' '; });

    vector<int> int_vector;
    for (string input : input_vector) {
        if (input.empty()) {
            continue;
        }

        int val = stoi(input, nullptr);
        int_vector.push_back(val);
    }

    return int_vector;
}

void stdin_loop()
{
    int longest_vector = 0;
    vector<vector<int>> all_numbers;

    string line = "";
    while (getline(cin, line))
    {
        if (line.empty()) {
            break;
        }

        vector<int> new_vector = handle_line(line);
        int vector_length = new_vector.size();

        if (vector_length > longest_vector) {
            longest_vector = vector_length;
        }

        all_numbers.push_back(new_vector);
    }

    vector<int> output;
    for (int i = 0; i < longest_vector; i++) {
        int total = 1;
        for (vector<int> row : all_numbers) {
            int val = row.at(i);
            total = val * total;
        }
        output.push_back(total);
    }

    for (int val : output) {
        cout << to_string(val) + " ";
    }
}

int main()
{
    stdin_loop();
    return 0;
}
