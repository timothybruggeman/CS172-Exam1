#ifndef SONG_H_
#define SONG_H_
#include <cstring>
#include <iostream>

//#include "Song.h"
//#include "Playlist.h"

using namespace std;

class Song {
public:
	// default song
	Song() {
		title = "";
		artist = "";
		genre = "";
	};
	// allow the caller to set up the song.  
	// valid genres are "ModernPop", "Grunge", "Classical" and "Americana".
	Song(string songTitle, string songArtist, string songGenre) {
		title = songTitle;
		artist = songArtist;
		genre = songGenre;
	};

	// return the song title
	string getTitle() const {
		return title;
	}  
	// return the artist who performed the song
	string getArtist() const {
		return artist;
	}
	// return the genre of the song
	string getGenre() const {
		return genre;
	} 

	// return true if the song is of the genre.
	bool isOfGenre(string theGenre) {
		if (theGenre == genre)
			return true;
		else return false;
	}

private:
	string title, artist, genre;
};

#endif
