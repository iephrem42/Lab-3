#if !defined PASSWORD_H
#define PASSWORD_H

//complete the includes
#include "ListArray.h"
#include "Text.h"
using CSC2110::ListArray;
using CSC2110::String;

class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
	  Password(); //constructor
	  ~Password(); //destructor
	  void addWord(String* word);//add a word to the list of possible passwords
	  void guess(int try_password, int num_matches);//index of guessed word in the list of all words 
	  int getNumberOfPasswordsLeft();// returns the number of passwords remaining
	  void displayViableWords(); //display the current list of possible passwords
	  int bestGuess();// the best word in the original list to guess next (done for you)
	  String* getOriginalWord(int index); //get a word from the list of all passwords

};

#endif
