#include "User.h"

User::User(string _id, string _name, string _password) :Account(_id, _name, _password)
{}

void User::introduce_briefly()
{

	cout << id << "user" << username << this->playlists.size();
}

void User::introduce_completely()
{
	cout << "ID: " << id << endl;
	cout << "MODE: " << "user" << endl;
	cout << "Username: " << username << endl;
	cout << "Playlists: " ;
	for (int i = 0; i < playlists.size(); i++)
		cout << playlists[i] << " playlist" << ',';
}

bool User::isRepeatedPlaylist(string name)
{
	for (auto playlist : playlists)
	{
		if (name == playlist->get_name())
			return true;
	}
	return false;
}

void User::add_playlist(string name)
{
	playlists.push_back(make_shared<Playlist>(name));
}

shared_ptr<Playlist> User::find_playlist_by_name(string name)
{
	for (auto playlist : playlists)
	{
		if (name == playlist->get_name())
			return playlist;
	}
	return nullptr;
}

void User::show_all_playlists()
{
		cout << "Playlist_name" << ',' << "Songs_number" << ',' << "Duration";
		for (auto playlist : playlists)
		{
			playlist->introduce_yourself();
		}

}
