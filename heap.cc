

#include "source.hh"


Heap::Heap()
{
    heapCount = 0;
}

bool Heap::isEmpty()
{
    return (heapCount == 0);
}

void Heap::push(class Event* event)
{
   
   if(heapCount + 1 > MAX_EVENTS)
   {
       return;
   }

   apEvents[heapCount] = event;

   int current = heapCount;

   while(current > 0 && apEvents[current]->time < apEvents[(current -1) / 2]->time)
   {
        class Event* temp = apEvents[(current -1)/2];
        apEvents[(current -1)/2] = apEvents[current];
        apEvents[current] = temp;


       current = (current -1)/2;
   }

   heapCount = heapCount + 1;

   return;
}

class Event* Heap::pop()
{
    if(heapCount <= 0)
    {
        return 0;
    }

    class Event* remEvent = 0;

    remEvent = apEvents[0];
    heapCount = heapCount - 1;

    // move the last entry to top of the heap
    apEvents[0] = apEvents[heapCount];

    int current = 0;   
    while(current * 2 + 1 < heapCount)
    {
        int child;

        if(current * 2 + 2 == heapCount)
        {
            child = current * 2 + 1;
        }
        else
        {
            if(apEvents[current * 2 + 1]->time < apEvents[current * 2 + 2]->time)
            {
                child = current * 2 + 1;
            }
            else
            {
                child = current * 2 + 2;
            }     
        }

        if(apEvents[current]->time < apEvents[child]->time)
        {
            break;
        }

        // swap current and chip
        class Event* temp = apEvents[current];
        apEvents[current] = apEvents[child];
        apEvents[child] = temp;

        current = child;
    }

    return remEvent;
}


class Event* Heap::removeEvent(class Event* event)
{
    // yet to be implemented

    return event;
}