
#ifndef L3_STATICCOUNTER_COUNTER_H
#define L3_STATICCOUNTER_COUNTER_H

class Counter
{
public:
    static int GetCount();
    static void Increment(); //如果里面用到的static member, function也要变成static
private:
    static int count_;
};


#endif //L3_STATICCOUNTER_COUNTER_H
