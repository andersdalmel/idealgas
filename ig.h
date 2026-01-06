#include <iostream>
#include <fstream>
#include <vector>

#pragma once

/*
Simulator will function as follows: 
    - System is modelled as a (2D) set of Particles within a Box of dimensions Nx x Ny. 
    - Particles never interact except when they occupy the same point, in which case they   
        undergo a completely elastic "specular" collision. This means total energy is conserved.
    - Particles are initialised at random positions with random velocity drawn from an input 
        probability distribution.
    - A particle collision is termed an Event, and Events are kept track of in a reverse 
        chronological EventQueue. 
    - The EventQueue is calculated by finding the time until collision for all pairs of particles
        in the Box. The tuple (time until collision, particle pair) is added to the EventQueue.
    - Whenever there is not an Event currently happening, particles propagate according to their
        velocity freely until an Event occurs. This Event is then popped from the back of 
        EventQueue and a new set of Events is calculated for the particles involved in the Event. 
         
*/


class Particle {

};

class Box {

};

class Event { 

};

class EventQueue {

};
