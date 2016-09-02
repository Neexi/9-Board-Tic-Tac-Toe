/*********************************************************
 *  Agent.h
 *  Nine-Board Tic-Tac-Toe Agent
 *  COMP3411/9414/9814 Artificial Intelligence
 *  Rudi Purnomo z3410682
 *  based on Alan Blair's agent.h provided in the source code
 */
extern int   port;
extern char *host;

 //  parse command-line arguments
void agent_parse_args( int argc, char *argv[] );

 //  called at the beginning of a series of games
void agent_init();

 //  called at the beginning of each game
void agent_start( int this_player );

int  agent_second_move(int board_num, int prev_move );

int  agent_third_move(int board_num,int first_move,int prev_move);

int  agent_next_move( int prev_move );

void agent_last_move( int prev_move );

 //  called at the end of each game
void agent_gameover( int result, int cause );

 //  called at the end of the series of games
void agent_cleanup();

/*********************************************************//*
    Adjacency value calculation
    Return the value based on the number of tiles filled
*/
int adj_value(int count_player, int count_opponent);

/*********************************************************//*
    Total board value
    Returning the total board value using adjacency value calculation for the board
*/
int total_board_all(int board_alpha[10][10]);

/*********************************************************//*
    Alpha beta pruning
*/
int move_check_ab(int current, int board_alpha[10][10], int depth, int alpha, int beta, int last_move);

void shuffle(int *array, size_t n);