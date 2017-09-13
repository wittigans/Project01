   /* PlayListTester.h tests the PlayList class.
    * Student Name: Trenten Witte
    * Date: September 12, 2017
    * Begun by: Joel Adams, for CS 112 at Calvin College.
    */
#ifndef PLAYLISTTESTER_H_
#define PLAYLISTTESTER_H_

class PlayListTester {
public:
	PlayListTester();
	virtual ~PlayListTester();
	void runTests();
	void testConstructors();
	void testSearchByArtist();
	void testSearchByYear();
};

#endif /* PLAYLISTTESTER_H_ */
