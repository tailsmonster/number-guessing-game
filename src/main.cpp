#include "../include/logic.hpp"
#include <iostream>
#include <cstdlib>


int main(){
  int top = getTop();
  int answer = getAnswer(top);
  int low = getLow(answer);

  start_msg(low, top);
  std::cout << top << '\n' <<  answer << '\n' << low;
  return 0;  
}