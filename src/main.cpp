#include "../include/logic.hpp"
#include <iostream>


int main(){
  int top = getTop();
  int answer = getAnswer(top);
  int low = getLow(answer);
  int guess;
  int attempts = 0;
  

  // std::cout << top << '\n' <<  answer << '\n' << low << std::endl;
  startMsg(low, top);
  while(gameloop(guess, answer)) {
    guess = inputMsg(low, top);
    if (gameloop(guess, answer))
      wrongMsg(guess, answer);
    if (attempts != 0 && attempts % 8 == 0) 
      tauntMsg(attempts);
    attempts++;
  }
  winMsg(attempts, guess);

  return 0;  
}