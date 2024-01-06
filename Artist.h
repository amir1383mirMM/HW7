#pragma once
#include "Account.h"
#include "Song.h"
#include <vector>

class Artist :public Account
{
public:
	Artist(string _id, string _name, string _password);
	bool isItFor(string id);
	void delete_music(string id);
	void show_your_songs(string name = "", int mode = 0);
	void introduce_briefly();
	void introduce_completely();
private:
	vector<shared_ptr<Song>> songs;
};


