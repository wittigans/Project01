   /* PlayListTester.cpp defines the PlayList test-methods.
    * Student Name: Trenten Witte
    * Date: September 12, 2017
    * Begun by: Joel Adams, for CS 112 at Calvin College.
    */


#include "PlayListTester.h"
#include "PlayList.h"
#include <cassert>
#include <iostream>
using namespace std;

PlayListTester::PlayListTester() {
	// TODO Auto-generated constructor stub

}

PlayListTester::~PlayListTester() {
	// TODO Auto-generated destructor stub
}

void PlayListTester::runTests() {
	cout << "\nTesting class PlayList.." << endl;
	testConstructors();
	testSearchByArtist();
	testSearchByYear();
	cout << "All tests passed!" << endl;
}

void PlayListTester::testConstructors() {
	cout << "- constructors..." << flush;
	PlayList pList("testSongs.txt");
	assert( pList.getNumSongs() == 4);
	cout << " 0 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testSearchByArtist() {
	cout << "- searchByArtist()... " << flush;
	//load a playlist with test songs
	PlayList pList("testSongs.txt");

	//empty case (0)
	vector<Song> searchResult = pList.searchByArtist("Cream");
	assert( searchResult.size() == 0 );
	cout << " 0 " << flush;

	//case of 1
	searchResult = pList.searchByArtist("Baez");
	assert( searchResult.size() == 1 );
	assert( searchResult[0].getTitle() == "Let It Be");
	cout << " 1 " << flush;

	//case of 2
	searchResult = pList.searchByArtist("Beatles");
	assert( searchResult.size() == 2 );
	assert( searchResult[0].getTitle() == "Let It Be");
	assert( searchResult[1].getTitle() == "Penny Lane");
	cout << " 2 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testSearchByYear() {
	cout << "- searchByYear()... " << flush;
	// load a playlist with test songs
	PlayList pList("testSongs.txt");

	// case for year 2015
	vector<Song> searchResult = pList.searchByYear(2015);
	searchResult = pList.searchByYear(2015);
	assert( searchResult.size() == 0);
	cout << " 0 " << flush;

	// case for year 2012
	searchResult = pList.searchByYear(2012);
	assert( searchResult.size() == 1);
	assert( searchResult[0].getYear() == 2012);
	assert( searchResult[0].getTitle() == "Call Me Maybe");
	cout << " 1 " << flush;

	// case for year 1967
	searchResult = pList.searchByYear(1967);
	assert( searchResult.size() == 2);
	assert( searchResult[0].getYear() == 1967);
	assert( searchResult[0].getTitle() == "Let It Be");
	assert( searchResult[1].getYear() == 1967);
	assert( searchResult[1].getTitle() == "Penny Lane");
	cout << " 2 " << flush;

	cout << " Passed!" << endl;
}
