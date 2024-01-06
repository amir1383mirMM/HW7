#pragma once
#include <iostream>

using namespace std;


class Account
{

public:
    Account(string _id, string _username, string pass);
    virtual bool isItFor(string id) = 0;
    virtual void delete_music(string id) = 0;
    virtual void show_your_songs(string name = "", int mode = 0) = 0;
    virtual void introduce_briefly() = 0;
    virtual void introduce_completely() = 0;
    virtual bool isRepeatedPlaylist(string name) = 0;
    virtual shared_ptr<Playlist> find_playlist_by_name(string name) = 0;
	virtual void show_all_playlists() = 0;
    virtual void add_playlist(string name);




    string get_id() { return id; }
    string get_name() { return username; }
    bool check_pass(string pass) const { return password == pass; }





protected:
    string id;
    string username;
    string password;

};
