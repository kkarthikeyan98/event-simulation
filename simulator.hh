
#ifndef SIMULATOR_HH
#define SIMULATOR_HH

#include<iostream>

#include "event.hh"
#include "heap.hh"


class Simulator
{
    private:
    int time;


    public:
    // set the pointer to global heap to heap pointer defined in cc file
    void setHeap(class Heap* heap);

    // return the time
    int now();

    // insert a event to the heap;
    void insert(class Event* event);

    
    // cancel a particular event;
    class Event* cancel(class Event* event);

    void doAllEvents();

};

#endif