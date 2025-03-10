#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

// init
int getTop();
int getAnswer(int top);
int getLow(int answer);

// // Messages
void startMsg(int low, int top);
int inputMsg(int low, int top)
void hintMsg(int guess, int answer);
void wrongMsg(int guess, int answer);
void tauntMsg(int attempts);
void winMsg(int attempts, int guess);

// // Game
bool gameloop(int guess, int answer, int attempts);


