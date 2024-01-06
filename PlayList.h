#pragma once
#include "Song.h"
#include <sstream>
#include <iomanip>
#include <vector>
using namespace std;

class Playlist
{
public:
	Playlist(string name);
	void introduce_yourself();
	string calc_all_time();
	void add_song(shared_ptr<Song>);
	void delete_music(string id);
	string addTimes(const string& time1, const string& time2);


	string get_name() { return name; }
	vector<shared_ptr<Song>> get_songs() { return songs; }

private:
	vector<shared_ptr<Song>> songs;
	string name;
};

