#pragma once
#include <iostream>
#include <map>
#include <algorithm>
#include <memory>
using namespace std;



class Song
{
public:
	Song(string _id, string _name, string _year, string _album, string _tags, string _duration);
	string get_id() { return id; }
	string get_name() { return name; }
	string get_year() { return year; }
	string get_album() { return album; }
	string get_duration() { return duration; }
	string get_artist_name() { return artist_name; }
	string get_tags() { return tags; }
	void introduce_completely();
	void introduce_briefly();



private:
	string id, name, year, album, tags, duration;
	string artist_name;

};


