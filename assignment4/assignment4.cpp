#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
/*
class Cards
{
    private:
        const int DECK_NUM = 52;
        const int CARD_HAND_SIZE = 5;
        int deck_array[DECK_NUM];
        
        char card_suit_array[CARD_HAND_SIZE];
        int card_value_array[CARD_HAND_SIZE];
        
        int card_value;
        char card_suit;

    
    public:
    //Default constructor to input all possible cards
    Cards() {
        for(int i = 0; i < (DECK_NUM - 1); ++i){
            deck_array[i] = i + 1;
        }
    void SetPlayers(int players){
        for(int i = 0; i < players; ++i) {
            int array_i[players];
        }
        return;
    }
    void SetValue(){
        for(int i = 0; i < players; ++i){
            array_i;
            while(!poker.eof){
                poker << card_value;
                for(int x = 0; x < (CARD_HAND_SIZE - 1); ++x){
                    cin >> array_i[x];
            }
        }
    }
    }
    //Maximum Value Function to find the maximum card value in a hand.
    int MaxValFunction() {
        
    }
    //Sequence Function to find if the numbers are sequential.
    void SequenceFunction() {
        
    }
    //If Same Function to see if any of the cards in the player's hand are the same.
    bool IfSame() {
        
    }
    //Array Converter Function to convert the file values and suits to an array.
    void ArrayConvert() {
        
    }
    //Suit Function to deduce suit associations in relation to valid poker hands.
    void SuitFunction() {
        for(int i = 0; i <CARD_HAND_SIZE; ++i){
            if(card_suit_array[i] == card_suit_array[i+1]);
        }
        
    }
    //Value Function to deduce the number value associations in relation to valid poker hands.
    void ValueFunction() {
        
    }
    };

*/
class Deck {
    private:
    int game_number_ = 0;
    int player_number_ = 0;
    
    public:
    
    void SetGame (int game){
        game_number_ = game;
        return;
    }
    void SetPlayers (int player) {
        player_number_ = 0;
        return;
    }
};

int main() 
{
    Deck Poker;
    
    const int CARD_HAND_SIZE = 5;
    const int DECK_SIZE = 52;
        
    char card_suit_array[DECK_SIZE];
    int card_value_array[DECK_SIZE];
    
    int game_num;
    int player_num;
    
    for (int i = 0; i < DECK_SIZE; ++i){
        card_suit_array[i] = '\0';
        card_value_array[i] = '\0';
    }
    
    for (int i = 0; i < DECK_SIZE; ++i){
        cout << card_suit_array[i] << endl;
        cout << card_value_array[i] << endl;
    }
    
   int x = 0;
   int i = 1;
   int y = 1;
    
    //To read data from the "pokerHands.txt" file.   
    ifstream poker("pokerHands.txt");
    
    //To get the information from the file.
    poker >> game_num >> player_num;
    cout << "Game Number:" << game_num << endl;
    cout << "Number of Players: " <<player_num << endl;
    
    Poker.SetGame(game_num);
    Poker.SetPlayers(player_num);
    
    
    while (i < player_num){
        while (y!=5){
        poker >> card_value_array[x] >> card_suit_array[x];
        x += 1;
        y += 1;
        }
        ++i;
    }
    
    for(int i = 0; i < 5; ++i){
        cout << card_value_array[i] << " " << card_suit_array[i] << endl;
    }
    
    
   //while (!poker.eof()){
     //   for (int i = 0; i <(CARD_HAND_SIZE - 1); ++i){
       // poker >> card_value_array[i];
      //  poker >> card_suit_array[i];
        //}
//    }
    
//    for (int i = 0; i < (DECK_SIZE - 1); ++i){
  //      cout << card_value_array[i] << endl;
    //}
    
 
    

    
    
}
    
    
    