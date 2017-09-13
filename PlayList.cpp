  /* PlayList.cpp defines the PlayList methods.
    *
    * Student Name: Trenten Witte
    * Date: September 12, 2017
    * Begun by: Joel Adams, for CS 112 at Calvin College.
    */

#include "PlayList.h"
#include "PlayListTester.h"
#include <iostream>
#include <fstream>		// ifstream
#include <cassert>		// assert()
using namespace std;

PlayList::PlayList() {
	// TODO Auto-generated constructor stub

}

PlayList::~PlayList() {
	// TODO Auto-generated destructor stub
}

/* PlayList constructor
 * @param: fileName, a string
 * Precondition: fileName contains the name of a playlist file.
 */
PlayList::PlayList(const string& fileName) {
	// open a stream to the playlist file
	ifstream fin( fileName.c_str() );
	assert( fin.is_open() );

	// read each song and append it to mySongs
	Song s;
	string separator;
	while (true) {
		s.readFrom(fin);
		if (!fin ) {break; }
		getline(fin, separator);
		mySongs.push_back(s);
	}

	// close the stream
	fin.close();
}

/* Retrieve length of the playlist
 * Return: the number of songs in the playlist.
 */
unsigned PlayList::getNumSongs() const {
	return mySongs.size();
}


/* Search by artist
 * @param: artist, a string.
 * Return: a vector containing all the Songs in mySongs by artist.
 */
vector<Song> PlayList::searchByArtist(const string& artist) const {
   vector<Song> v;

   for (unsigned i = 0; i < mySongs.size(); i++) {
      if ( mySongs[i].getArtist().find(artist) != string::npos ) {
         v.push_back( mySongs[i] );
      }
   }

   return v;
}

/* Search by year
 * @param: year, an int.
 * Return: a vector containing all the songs in mySongs by Year.
 */
vector<Song> PlayList::searchByYear(int year) const {
	vector<Song> v;

	for (unsigned i = 0; i < mySongs.size(); i++) {
		if ( mySongs[i].getYear() == year){
			v.push_back( mySongs[i]);
		}
	}
	return v;
}

