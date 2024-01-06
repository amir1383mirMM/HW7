#include "Playlist.h"

Playlist::Playlist(string name)
{
	this->name = name;
}

string Playlist::calc_all_time()
{
    string sumTime;
	for (auto &song : songs)
	{

        sumTime = addTimes(sumTime, song->get_duration());
	}
	return sumTime;
}

void Playlist::add_song(shared_ptr<Song>)
{
	this->songs.push_back(make_shared<Song>());
}

void Playlist::delete_music(string id)
{
	for (auto &song : songs)
		if (song->get_id() == id)
			delete &song;
}

void Playlist::introduce_yourself()
{
	cout << name << ',' << songs.size() << ',' << this->calc_all_time();
}

string Playlist::addTimes(const string& time1, const string& time2) {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    char colon;
    istringstream iss1(time1);
    iss1 >> hours1 >> colon >> minutes1 >> colon >> seconds1;

    istringstream iss2(time2);
    iss2 >> hours2 >> colon >> minutes2 >> colon >> seconds2;

    int totalSeconds = hours1 * 3600 + minutes1 * 60 + seconds1 + hours2 * 3600 + minutes2 * 60 + seconds2;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    ostringstream oss;
    oss << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;

    return oss.str();
}

