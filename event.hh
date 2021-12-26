
#ifndef EVENT_HH
#define EVENT_HH

#include<iostream>
#include "simulator.hh"

class Event
{
    public:
        int eId;
        int time;

   // public:
        Event();
        Event(int id, int time);

        int getEventId();
        void showTime();

        // less than a other event?
        bool isLessThan(Event* event);
        
        // simulator execute
        void execute(Simulator* sim);
};

#endif