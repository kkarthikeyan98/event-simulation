
#ifndef HEAP_HH
#define HEAP_HH

#include "event.hh"
/*

Heap class

heap of events (pointer)
*/

#define MAX_EVENTS  1000

class Heap
{


    public:

        int heapCount;
        
        class Event* apEvents[MAX_EVENTS];

        Heap();

        // insert a event into the heap
        void push(class Event* event);

        // remove the top element from the heap
        class Event* pop();

        // return the current size of the heap. init with zero
        int getSize() {return heapCount;}

        // checks if the heap is empty or not
        bool isEmpty();

        // remove a particular entry (event object pointer) from the heap
        class Event* removeEvent(class Event*);



};

#endif