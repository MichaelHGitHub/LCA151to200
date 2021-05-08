#include "header2.h"

int main(char* args[], int argc)
{
    
    MinStack* obj = new MinStack();
    obj->push(0);
    obj->push(1);
    obj->push(0);
    int param_1 = obj->getMin();
    obj->pop();
    //int param_2 = obj->top();
    param_1 = obj->getMin();
}
