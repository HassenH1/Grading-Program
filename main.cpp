#include <iostream>

//void grade(int);

void grade(int i){
  if(i == 100){
    std::cout << "You got a perfect score" << std::endl;
  }
  else if(i < 100 && i >= 90){
    std::cout << "A" << std::endl; 
  }
  else if(i <= 89 && i >= 80){
    std::cout << "B" << std::endl; 
  }
   else if(i <= 79 && i >= 70){
    std::cout << "C" << std::endl; 
  }
  else if(i <= 69 && i >= 60){
    std::cout << "D" << std::endl; 
  }
   else {
    std::cout << "F" << std::endl; 
  }
}

int main(){
  
  int input{};
  std::cout << "Grading Program" << std::endl;
  std::cout << "Enter your grade: ";
  std::cin >> input;

  grade(input);

	return 0;

}
