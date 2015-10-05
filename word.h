/*
* word.h
* by Cameron Flowers
* Comp15 12/7/2014
* Overview -- A structure containing a word and vector of songs 
*/

#ifndef __word_h__
#define __word_h__

struct word{
  string word; //word in the lyric
  vector<SongFreq> *songlist;
  size_t numSongs; // list of songs with word
}


struct Song{
    string title;
    string artist;
    vector<string> lyrics;
  
}

struct SongFreq{
  Song song;
  size_t freq;
  }

#endif // __word_h__
 