#include <iostream>
#include <cstring>

const char* VERSION = "Lol program / programming language version 0.0.1\nMacOS\n";

int main(int argc, char* argv[]){
  if(argc <= 2){
    char* arg1 = argv[1];
    if(std::strcmp(arg1, "--version") == 0){
      std::cout << VERSION;
      return 0;
    }
  }else{
    std::cout << "--version Prints the current version\n";
    return 0;
  }
}
