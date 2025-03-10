#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

// init
int getTop();
int getAnswer(int top);
int getLow(int answer);

// // Messages
void start_msg(int low, int top);
void wrong_msg(int attempts);
void taunt_msg(int attempts);
void win_msg(int attempts, int guess);

// // Game
int isCorrect(int guess, int low, int top);


