#include "Counter.h"
int Counter::count_ = 0;  //必须在外面就先initalize
int Counter::GetCount()
{
    return count_;
}
void Counter::Increment()
{
    count_++;
}
