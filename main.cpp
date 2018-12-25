#include <iostream>
#include <boost/algorithm/string.hpp>

using namespace std;

void stdin_loop(void handler(string))
{
    cout << "Type stuff and it will be echoed to you" << endl;

    string line = "";
    while (getline(cin, line))
    {
        handler(line);
    }
}

int **arr;

void handle_line(string line)
{
    cout << "You wrote: " + line << endl;
}

int main(int argc, char *argv[])
{
    stdin_loop(handle_line);
    return 0;
}
