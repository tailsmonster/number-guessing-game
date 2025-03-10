#include "../include/logic.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

// init
int getTop() { 
  srand(time(0));
  int top = rand() % 101;
  if (top == 0 || top == 1) 
    top += 50;
  return top;
}

int getAnswer(int top) { 
  srand(time(0));
  int answer = rand() % top;
  if (answer == 0) 
    answer += 1;
  return answer;
}

int getLow(int answer) { 
  srand(time(0));
  return rand() % answer;
}

// Mesages
void startMsg(int low, int top) {
  std::cout << "Hey, let's play a game :3\n\nI'm gonna think of a number between " << low << " and " << top << std::endl;
}

int inputMsg(int low, int top) {
  int guess;
  std::cout << "Guess which number am I thinking of:" << std::endl;
  bool cond = true;
  while (cond) {
    std::cin >> guess;
    if (std::cin.fail()) {  // If input is not a valid integer
      std::cin.clear(); // Clear error flag
      std::cin.ignore(10000, '\n'); // Ignore invalid input
      std::cout << "Uhh, I said to put in a number >:(" << std::endl;
    } else if (guess <= low || guess >= top){
      std::cout << "That is outside the range I set for you! Please choose a number BETWEEN " << low << " and " << top <<":" << std::endl;
    } else {
      cond = false;
    }
  }
  return guess;
}

void hintMsg(int guess, int answer) {
  if (guess > answer) 
    std::cout << "You're number is too high! Try guessing lower!" << std::endl;
  else
    std::cout << "You're number is too low! Try guessing higher!" << std::endl;
}

void wrongMsg(int guess, int answer) {
  std::cout << "WRONGGG!!!!!!! ;3" << std::endl;
  hintMsg(guess, answer);
}

void tauntMsg(int attempts) {
  std::cout << "O M G, how have you not guessed it after " << attempts << " attempts??" << std::endl;
}

void winMsg(int attempts, int guess) {
  if (attempts == 1) 
    std::cout << "\nWoahh! You got it! The correct answer was " << guess << ", and it only took you 1 attempt! Impressive!" << std::endl;
  else if (attempts <= 6)
    std::cout << "\nYour guess of " << guess << " was correct! And it only took you " << attempts << " attempts! :p" << std::endl;
  else
    std::cout << "\nOof, it took you like " << attempts << " attempts to get it right... " << guess << " was clearly the answer,,, smh vro, get better :(" << std::endl;
}

// Game
bool gameloop(int guess, int answer) {
  if (guess == answer)
    return false;
  else 
    return true;
}