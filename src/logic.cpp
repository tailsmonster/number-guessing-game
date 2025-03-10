#include "../include/logic.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

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

void start_msg(int low, int top) {
  std::cout << "Hey, let's play a game :3\n\nI'm gonna think of a number between " << low << " and " << top << std::endl;
}