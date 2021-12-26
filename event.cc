
#include "source.hh"


Event::Event(){}

Event::Event(int id, int time)
{
    eId = id;
    this->time = time;
}

int Event::getEventId()
{
    return eId;
}
void Event::showTime()
{
    // todo
    std::cout << "Event started at" << time << std::endl;
}

bool Event::isLessThan(Event* otherevent)
{
    return (this->time < otherevent->time);
}

void Event::execute(Simulator* sim)
{
    std::cout 
    << "Event id executed is " << eId 
    << " Created time: " << time 
    << std::endl;

    if(time <= 10)
    {
        time += 2;
        sim->insert(this);
    }

}