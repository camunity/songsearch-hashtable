# ReadMe for COMP15 HW6
## Song Search 
### Cameron Flowers 

Purpose:

When provided a song database (formatted txt file) and a user search query,
this program will identify the songs from the input file that 
contain that word and print it in context along with the artist and song title.
This program matches songs and displays the top ten best matching songs based 
on word occurrence.  

Files Included:

songsearch.cpp

songsearch.h

word.h

read_lyrics.cpp

hash_func.cpp

main.cpp
ReadMe.md

To compile:
Using the included makefile is okay. 

Outline of Implementation:

Goes through lyrics and hashes it to see if the word already exists
If it does not exist, we makes a new wordNode, sets the word to the alphaOnly
of the current lyric, makes a new song_and_freq with a pointer to the current
song, and sets the frequency of the word in that song to 1 and puts this 
wordNode into the table. Table processes duplicate words by either
updating frequency or creating a new node and adding it to the s&f array.
We update our Top10 list by running the function CheckTopTen to see which
songs_and_freqs are of the highest frequencies and swapping to keep a running
list of the Top10. After it takes in a word, program hashes it to find
the word in the hash table then creates a descending list of the s&f array 
for that word and prints them in their context for the user. 
