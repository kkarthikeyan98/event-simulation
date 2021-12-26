#include<iostream>

#include "source.hh"

using namespace std;

int gTime = 0;

int getCurrTick()
{
    gTime += 10;
    return gTime;
}

// create a global heap
class Heap eventsHeap;

int main()
{
       
    int counterid = 0;
    class Simulator* simulator = new Simulator();

    simulator->setHeap(&eventsHeap);
    

    simulator->insert(new Event(1, 0));

    /*
    for(int i = 0; i < 10; i++)
    {
        simulator->insert(new Event( counterid++, getCurrTick() ));
    }
    */
    simulator->doAllEvents();



    delete simulator;
   // priority_queue< int, vector<int>, greater<int> > basicheap;


//    basicheap.push(10);

  //  std::cout << basicheap.top() << endl;
}