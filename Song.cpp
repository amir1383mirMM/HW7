#include "Song.h"

Song::Song(string _id, string _name, string _year, string _album, string _tags, string _duration)
	:id(_id), name(_name), year(_year), album(_album), tags(_tags), duration(_duration)
{
}

void Song::introduce_completely()
{
	cout << this->id << ',' << this->name << ',' << this->artist_name << ',' <<
		this->year << ',' << this->album << ',' << this->tags << ',' << this->duration;
}

void Song::introduce_briefly()
{
	cout << this->id << ',' << this->name << ',' << this->artist_name;
	cout << endl;
}

