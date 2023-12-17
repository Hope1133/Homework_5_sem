#ifndef NodeClass_hpp
#define NodeClass_hpp

#include <stdio.h>
class Node
{
public:
  int value;
  int count; //Кол-во повторений значения value
  Node* left;
  Node* right;
};

#endif /* NodeClass_hpp */
