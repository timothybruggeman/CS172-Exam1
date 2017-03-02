#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include <cstring>
#include <iostream>

#include "Song.h"
//#include "Playlist.h"

using namespace std;

class Playlist {
private:
	string name;
	int numberSongs;
	const int maxSongs = 9;
	Song songArray[9];
public:
	// constructor for the playlist
	Playlist() {
		numberSongs = 0;
	};

	// get the name of the Playlist
	string getName() {
		return name;
	};

	// returns true when at least one song of this genre is present.
	bool hasGenre(string theGenre) {
		for (int count = 0; count <= numberSongs; count++) {
			if (theGenre == songArray[count].getGenre())
				return true;
		}
			return false;
	}
		

	// Add a new song
	void addSong(Song song) {
		numberSongs++;
		songArray[numberSongs - 1] = song;
	}

	// How many songs in this playlist?
	int numberOfSongs() {
		return numberSongs;
	}

	// Play a song.  Return an empty string if there is no such song.
	string playSong(int songNumber) {
		if (songNumber >= 10)
			return "";
		return songArray[songNumber].getTitle();
	}



};

#endif