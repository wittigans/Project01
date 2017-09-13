   /* Song.h declares a class for storing song information.
    * Student Name: Trenten Witte
    * Date: September 12, 2017
    * Begun by: Joel Adams, for CS 112 at Calvin College.
    */

   #ifndef SONG_H
   #define SONG_H

   #include <string>
   using namespace std;

   class Song {
   public:
	   Song();
	   Song(const string& title, const string& artist, unsigned year);
	   void readFrom(istream& in);
	   void writeTo(ostream& out) const;
	   string getTitle() const;
	   string getArtist() const;
	   unsigned getYear() const;
	   bool operator==(const Song& aSong) const;

   private:
      string   myTitle;
      string   myArtist;
      unsigned myYear;
   };

   #endif /*SONG_H_*/
