#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  Kelsey Dimmick
    10/26/2017
    A program to play the game of Pig.
*/

//Attempted class for the game of Pig
class Pig {
    private:
        char turn_;
        int dice_;
        int computer_score_;
    
    public:

        //Default constructor.
        Pig(){
            turn_ = 0;
            dice_ = 0;
            computer_score_ = 0;
        }
        //A function to Set the Computer's turn value.
        void ComputerSetTurn(char turn) {
            turn_ = turn;
            srand(time(0));
            turn_ = (((rand()% (static_cast<char>(122-65))+65)+1));
            
            ComputerGetTurn();
            return;
        }
        //A function to check the turn value and if it is 's'.
        char ComputerGetTurn() {
            if (turn_ != 's'){
                ComputerSetDice(0);
            }
            return turn_;
        }
        //A function to get the random dice roll.
        void ComputerSetDice(int dice) {
            dice_ = dice;
            
            srand(time(0));
            dice_ = (((rand()%6)+1));
            
            PrintDice();
            ComputerGetDice();
            return;
        }
        //A function to check to dice value.
        int ComputerGetDice() {
            while (dice_ > 1) {
                computer_score_ = computer_score_ + dice_;
                
                cout << "The computer's current score is: " << computer_score_ << endl << endl;
                dice_ = (((rand()%6)+1));
                
                if (dice_ ==1) {
            
                        computer_score_ = 0;
                        cout << "The computer busted!" << endl;
                        cout << "The computer's score is now: " << computer_score_ << endl;
                        cout << "Your Turn." << endl;
                        turn_ = 'n';
                        
            
                    }
            }
            ComputerSetScore(computer_score_);
            return computer_score_;
        }
        void ComputerSetScore(int score){
            computer_score_ = score;
            if (computer_score_ >= 100){
                cout << "YOU LOST! THE COMPUTER MADE A PIG'S BREAKFAST OUT OF YOU!!" << endl << endl;
            }
            ComputerGetScore();
        }
        int ComputerGetScore(){
            
            return computer_score_;
        }
        
        void PrintDice(){
            cout << "The computer rolled a: " << dice_ << endl << endl;
            return;
        }
};

int main(){
    char turn = 'y';
    int dice = 0;
    int player_score = 0;
    
    Pig game;
    
    cout << "WELCOME TO THE GAME OF PIG! THE GAME WITH STY-LE!" << endl << endl;
    cout << "WILL YOU BE THE FIRST TO BE HIGH ON THE HOG? OR WILL YOU BE DOWN AND OUT IN THE MUD?" << endl << endl;
    cout << "LET'S FIND OUT IN TODAY'S GAME OF PIG!" << endl << endl << endl;
    
    cout << "Press any key to roll the dice." << "If you want to keep rolling enter 'y'. But if you want to stay where you are enter 's'." << endl << endl; 
    cin >> turn;
   while ((player_score < 100) ||game.ComputerGetScore() < 100){
        while (turn == 'y'){
        
            srand(time(0));
            dice = (((rand()%6)+1));
        
            cout << "You rolled a: " << dice << endl << endl;
            
            if (dice > 1){
            
                player_score = player_score + dice;
            
                cout << "Your current score is: " << player_score << endl << endl;
                cout << "Roll again?" << endl << endl;
                cin >> turn;
            
                if (player_score >= 100){
                    cout << "YOU WIN! GO HOG WILD!!" << endl << endl;
                }
            
            }
            else {
            
                player_score = 0;
                cout << "You busted!" << endl;
                turn = 'n';
                game.ComputerSetTurn('y');
            }
            
        }
    
        if (turn == 's'){
            game.ComputerSetTurn('y');
        }
    }
    
    
}