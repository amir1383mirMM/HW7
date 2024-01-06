#include "Artist.h"

Artist::Artist(string _id, string _name, string _password) :Account(_id, _name, _password)
{}

bool Artist::isItFor(string id)
{
    for (auto& song : songs)
    {
        if (song->get_id() == id)
            return true;
    }
    return false;
}

void Artist::delete_music(string id)
{
    for (auto& song : songs)
        if (song->get_id() == id)
            delete& song;
}

void Artist::show_your_songs(string name, int mode)
{
    for (auto& song : songs)
    {

        if (mode == 1) {
            if (song->get_name().find(name) != string::npos)
                song->introduce_briefly();
        }
        else if (mode == 0) {
            cout << "ID" << ',' << "Name" << ',' << "Artist" << ',' << "Year" << ',' << "Album" << ',' << "Tags" << ',' << "Duration";
            song->introduce_completely();
        }
    }
}

void Artist::introduce_briefly()
{

    cout << id << "artist" << username << this->songs.size();
}

void Artist::introduce_completely()
{
    cout << "ID: " << id << endl;
    cout << "MODE: " << "artist" << endl;
    cout << "Username: " << username << endl;
    cout << "Songs: ";
    for (int i = 0; i < songs.size(); i++)
        cout << songs[i] << ',';
}
