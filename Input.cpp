#include "Input.h"

bool Input::set()
{
    string line;
    getline(cin, line);
    if (line == "")
    {
        this->is_running = false;
        return false;
    }

    stringstream ss1(line);
    vector<string > temp;

    for (int i=0; i<2; i++)
        getline(ss1, temp[i], ' ');

    command.first = temp[0];
    command.second = temp[1];

    stringstream ss2(line);
    string token;
    while (getline(ss2, token, '<')) {
        size_t end = token.find('>');
			value.push_back(token.substr(0, end));
	}

    return true;
}

void Input::clear()
{
    command.first.clear();
    command.second.clear();
    value.clear();
}