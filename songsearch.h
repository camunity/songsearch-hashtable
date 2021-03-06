/*
* songsearch.h
* by Cameron Flowers
* Comp15 12/7/2014
* Overview -- Hash Table Interface 
*/

#ifndef __song_search__
#define __song_search__

#include <iostream>
#include <fstream>
#include "hashfunc.h"
#include "songsearch.h"
#include <sstream>
#include <vector>
#include <string>

using namespace std;

const int INIT_CAPACITY = 10;
const double LOADMAX = 0.5;

struct Song{ //Will store songs
    string title;
    string artist;
    vector<string> lyrics;
  };

struct SongFreq{ //Will be put in an array for each word
  Song *song;
  size_t freq;
  };
  
struct wordNode{ //Will be hashed for quick searching
  string word; //word in the lyric
  SongFreq songs_and_freqs [11]; //TOP 10 with 1 slot avail. to store temps
  size_t numSongs; // songs with word (can't be over 11)
};


class WordTable{

      public:
	      WordTable();
	     ~WordTable();
	      double load_factor();
	      void analyzeSong(Song* song);
	      void CheckTopTen(Song* song);
	      void search();
	      void expand();
      	      void read_lyrics(const char * filename, bool show_progress);
	      uint32_t hashWord(string word);
	      string alphaOnly(string s);
	      void duplicateWord(uint32_t hash, Song* song);
	      void analyzeWord(wordNode* wordNode);
	      void Sort(wordNode* node);
	      void printContext(Song* song, string word);
	      int songCount;

      private:
	     
	      vector<Song*> songList;
	      size_t tableSize;
	      wordNode** table;
	      size_t numWords;

};

#endif // __song_search__