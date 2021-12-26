#include "source.hh"


// create a heap pointer here
class Heap* eventHeap = nullptr;


void Simulator::setHeap(class Heap* heap)
{
    if(!eventHeap)
    {
        eventHeap = heap;
    }
}

int Simulator::now()
{
    return time;
}

// insert a event object to the heap
void Simulator::insert(class Event* event)
{
    if(eventHeap)
    {
        eventHeap->push(event);

        std::cout << "the event id " << event->eId 
        << " of time: " << event->time
        << " is pushed to heap" << std::endl;
    }
    else
    {
        std::cout << "allocate a heap object and point it first!!!" << std::endl;
    }
        
}


class Event* Simulator::cancel(class Event* event)
{
        if(eventHeap)
        {
            eventHeap->removeEvent(event);
        }
        
        return event;
}

void Simulator::doAllEvents()
{
    if(eventHeap)
    {
        while(!eventHeap->isEmpty())
        {
            Event* event = eventHeap->pop();

            // pop a event from event heap and execute the event. execute???
            if(event)
            {
                // event execute method passes simulator object as argument. Why?
                event->execute(this);

                // delete the event object
               // delete event;
            }

        }

        std::cout << "All events are exectued and deletedsuccessfully" << std::endl;

    }
    else
    {
        std::cout << "create a heap first" << std::endl;

    }
}