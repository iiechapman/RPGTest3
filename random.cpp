//Random function implementations



#include <cstdlib>
#include "range.h"




int random(range r)
{

    return r.low + rand() % ((r.high + 1) - r.low);

}


int random(int high,int low)
{

    return low + rand() % ((high + 1) - low);


}