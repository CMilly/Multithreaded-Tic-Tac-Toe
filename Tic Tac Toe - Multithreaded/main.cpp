/*
 * Cameron Mims
 * Personal Project - Multithreaded Tic Tac Toe
 * Date(Started): 3/19/19
 */

#include <iostream>
#include <thread>
#include <pthread.h>
#include <mutex>
#include <array>
using namespace std;

pthread_cond_t cond_1 = PTHREAD_COND_INITIALIZER; //Conditional variable "1"
pthread_cond_t cond_2 = PTHREAD_COND_INITIALIZER; //Conditional variable "2"

pthread_mutex_t mutex_1 = PTHREAD_MUTEX_INITIALIZER; //Mutex variable "1"
pthread_mutex_t mutex_2 = PTHREAD_MUTEX_INITIALIZER; //Mutex variable "2"

/**
 * Implementation of a Tic Tac Toe Board
 *
 * A board is to represent that different moves
 * and available moves a player can make on it
 * The board keeps track of each and every move
 * and what is available and regulates til
 * someone has won
 */
class Board{
private:
    array<array<char, 3>, 3> board_arr;
public:
    /**
     * Board contrsuctor
     */
    Board(){

    }
    /**
     * Board constructor that take in an array of type char
     * @param board_arr_construct
     */
    Board(array<array<char, 3>, 3> board_arr_construct){
        board_arr = board_arr_construct;
    }
    /**
     * Gets the current state of the board via an array of type char
     * @return char[][]
     */
    array<array<char, 3>, 3> get_board_state(){
        return board_arr;
    }
    /**
     * Insert a char via the position given on the board as well as the player char
     * @param x
     * @param y
     * @param c
     */
    void insert_at_pos(int x, int y, char c){
        if(x > board_arr.size()-1){
            cout << "x coordinate greater than board size" << endl;
        }
        else if(y > board_arr.size()-1){
            cout << "y coordinate greater than board size" << endl;
        }
        else if(isalpha(board_arr[x][y])){
            cout << "Player already placed " << board_arr[x][y] << " here" << "\nTurn lost" << endl;
        }
        else{
            board_arr[x][y] = c;
        }
    }
    /**
     * Set or reset the state of the board
     */
    void set_board_state(){
        for(int r = 0; r < board_arr.size(); r++){
            for(int c = 0; c < board_arr.size(); c++){
                board_arr[r][c] = '-';
            }
        }
    }
    /**
     * Check rows to see if player 'X' has won
     * @return bool
     */
    bool check_x_rows(){
        if(board_arr[0][0] == 'X' && board_arr[0][1] == 'X' && board_arr[0][2] == 'X'){
            return true;
        }
        if(board_arr[1][0] == 'X' && board_arr[1][1] == 'X' && board_arr[1][2] == 'X'){
            return true;
        }
        if(board_arr[2][0] == 'X' && board_arr[2][1] == 'X' && board_arr[2][2] == 'X'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * Check rows to see if player 'Y' has won
     * @return bool
     */
    bool check_y_rows(){
        if(board_arr[0][0] == 'Y' && board_arr[0][1] == 'Y' && board_arr[0][2] == 'Y'){
            return true;
        }
        if(board_arr[1][0] == 'Y' && board_arr[1][1] == 'Y' && board_arr[1][2] == 'Y'){
            return true;
        }
        if(board_arr[2][0] == 'Y' && board_arr[2][1] == 'Y' && board_arr[2][2] == 'Y'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * Check columns to see if player 'X' has won
     * @return bool
     */
    bool check_x_columns(){
        if(board_arr[0][0] == 'X' && board_arr[1][0] == 'X' && board_arr[2][0] == 'X'){
            return true;
        }
        if(board_arr[0][1] == 'X' && board_arr[1][1] == 'X' && board_arr[2][1] == 'X'){
            return true;
        }
        if(board_arr[0][2] == 'X' && board_arr[1][2] == 'X' && board_arr[2][2] == 'X'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * Check columns to see if player 'Y' has won
     * @return bool
     */
    bool check_y_columns(){
        if(board_arr[0][0] == 'Y' && board_arr[1][0] == 'Y' && board_arr[2][0] == 'Y'){
            return true;
        }
        if(board_arr[0][1] == 'Y' && board_arr[1][1] == 'Y' && board_arr[2][1] == 'Y'){
            return true;
        }
        if(board_arr[0][2] == 'Y' && board_arr[1][2] == 'Y' && board_arr[2][2] == 'Y'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * Check diagonals to see if player 'X' has won
     * @return bool
     */
    bool check_x_diagonals(){
        if(board_arr[0][0] == 'X' && board_arr[1][1] == 'X' && board_arr[2][2] == 'X'){
            return true;
        }
        if(board_arr[2][0] == 'X' && board_arr[1][1] == 'X' && board_arr[0][2] == 'X'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * Check diagonals to see if player 'Y' has won
     * @return bool
     */
    bool check_y_diagonals(){
        if(board_arr[0][0] == 'Y' && board_arr[1][1] == 'Y' && board_arr[2][2] == 'Y'){
            return true;
        }
        if(board_arr[2][0] == 'Y' && board_arr[1][1] == 'Y' && board_arr[0][2] == 'Y'){
            return true;
        }
        else{
            return false;
        }
    }
    /**
     * String the current contents/status of the board
     */
    void to_string(){
        for(int r = 0; r < board_arr.size(); r++){
            for(int c = 0; c < board_arr.size(); c++){
                cout << board_arr[r][c] << ' ';
            }
            cout << endl;
        }
    }
};

/**
 * Implementation of a Player
 *
 * A player is able to have a turn
 * that turn is controlled on a method basis
 * this is done to null that fact of making
 * more than one player
 */
class Player{
private:
    int turn = 0;
public:
    /**
     * Constructor for player class
     */
    Player(){

    }

    char get_turn(){
        if(turn == 0){
            turn++;
            return 'X';
        }
        if(turn == 1){
            turn--;
            return 'Y';
        }
    }
};

Board board; //Shared board structure
Player player; //Shared player structure

void* thread_method_one(void*){
    pthread_mutex_lock(&mutex_1);
    pthread_cond_wait(&cond_1, &mutex_1);
    int x,y;

    cout << "method one called.....\n";
    cout << "Please enter x coordinate: ";
    cin >> x;
    cout << "Please enter y coordinate: ";
    cin >> y;
    board.insert_at_pos(x,y,player.get_turn());
    board.to_string();
    //pthread_cond_signal(&cond_2);
    pthread_mutex_unlock(&mutex_1);
}

void* thread_method_two(void*){
    pthread_mutex_lock(&mutex_2);
    pthread_cond_wait(&cond_2, &mutex_2);
    int x,y;

    cout << "method two called.....\n";
    cout << "Please enter x coordinate: ";
    cin >> x;
    cout << "Please enter y coordinate: ";
    cin >> y;
    board.insert_at_pos(x,y,player.get_turn());
    board.to_string();
    //pthread_cond_signal(&cond_3);
    pthread_mutex_unlock(&mutex_2);
}


int main() {
    board.set_board_state();

    pthread_t x_thread, y_thread;
    cout << "x sub thread created...\n";
    cout << "y sub thread created...\n";

    while(true){
        int retx_thread = pthread_create(&x_thread, NULL, thread_method_one, NULL);
        int rety_thread = pthread_create(&y_thread, NULL, thread_method_two, NULL);

        //Main thread signals the x sub thread to move
        cout << "activating x sub thread...\n";
        pthread_cond_signal(&cond_1);
        pthread_join(x_thread, NULL);
        cout << "deactivating x sub thread...\n";

        //Main thread calculates if game won
        cout << "main thread calculating if game won...\n";
        if(board.check_x_diagonals() || board.check_x_rows() || board.check_x_columns()){
            cout << "X player wins" << endl;
            break;
        }

        //Main thread signals the y sub thread to move
        cout << "activating y sub thread...\n";
        pthread_cond_signal(&cond_2);
        pthread_join(y_thread, NULL);
        cout << "deactivating y sub thread...\n";

        //Main thread calculates if game won
        cout << "main thread calculating if game won...\n";
        if(board.check_y_diagonals() || board.check_y_rows() || board.check_y_columns()){
            cout << "Y player wins" << endl;
            break;
        }
    }
    return 0;
}
