#include <iostream>
#include <string>
        // custom function that takes a string as an argument
        void print(std::string msg)
        {
          // write to stdout
          std::cout << msg << std::endl;
        }
        // main function is called at program start
        int main(int argc, char** argv)
        {
          // variable declaration and initialization
          std::string greeting = "Hello, world!";
          print(greeting);
          return 0;
}