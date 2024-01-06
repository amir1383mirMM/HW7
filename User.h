#pragma once
#include "Account.h"
#include "Playlist.h"

class User : public Account
{
public:
	User(string id, string name, string password);

	void introduce_completely();
	void introduce_briefly();
	bool isRepeatedPlaylist(string name);
	void add_playlist(string name);
	shared_ptr<Playlist> find_playlist_by_name(string name);
	void show_all_playlists();

	vector <shared_ptr<Playlist>>& get_playlists() { return playlists; }

protected:
	vector <shared_ptr<Playlist> >playlists;
};



