// #include <logic.hpp>

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
int top = getTop();

int getAnswer() { 
  srand(time(0));
  int answer = rand() % top;
  if (answer == 0) 
    answer += 1;
  return answer;
}
int answer = getAnswer();

int getLow() { 
  srand(time(0));
  return rand() % answer;
}
int bottom = getLow();


void start_msg() {
  std::cout << "Hey, let's play a game :3\n\nI'm gonna think of a number between " << low << " and " << high << std::endl;
  // std::cout << top << '\n' <<  answer << '\n' << bottom;
  // return 0;
}