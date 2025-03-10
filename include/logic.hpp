#pragma once

#include <iostream>
#include <cstlib>
#include <ctime>

// init
int low, top, answer;
int attempts = 0;
int guess;
int getTop();
int getAnswer();
int getBottom();

// Messages
void start_msg();
void wrong_msg(int attempts, );
void taunt_msg(int attempts);
void win_msg(int attempts, int guess);

// Game
int isCorrect(int guess, int low, int high);


