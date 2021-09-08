#include <iostream>
#include <string>

//void Hello()
//{
//    std::cout <<"Hello from Header file";
//}

//sobrecarga de metodo.
int Add(int a, int b)
{
  return a + b;
}

float Add(float a, float b)
{
  return a + b;
}

std::string Add(std::string a, std::string b)
{
  return a + b;
}