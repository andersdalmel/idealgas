#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <random>
#include "ig.h"

using std::vector;

std::mt19937 rng{ std::random_device{}() };


/* Class models a single particle and its important parameters. Must contain mass, momentum, position. */
class Particle {
    private:
        double mass;
        vector<double> position;
        vector<double> momentum;
    public:
        Particle(double m, double xCoord, double yCoord, double xMom, double yMom) : mass{m}, 
            position{xCoord, yCoord}, momentum{xMom, yMom} 
        {}
        void setMass(double newMass) {
            mass = newMass;
        }
        void setMomentum(double xMom, double yMom) {
            momentum = {xMom, yMom};
        }
        void setPosition(double xCoord, double yCoord) {
            position = {xCoord, yCoord};
        }
        double getMass () {
            return mass; 
        }
        vector<double> getPosition() {
            return position;
        }
        vector<double> getMomentum() {
            return momentum;
        }
}

/* Class models a box containing N particles which whizz around, colliding elastically but otherwise noninteracting. */
class Box {
    private: 
        int N;
        int length;
        int width;

        double pi = 3.141592653589793238462643383279502884197;
        double h = 6.62607015e-34;
        
        vector<Particle> particles; 
    public:
        /* The randomness in initialising particle positions and velocties is contained in this constructor */
        Box(int N, int len, int width, double mass) : N{N}, length{len}, width{width} {
            for(int i = 0; i < N, ++i) {

            }
        }

        void setN(int newN) {
            N = newN;
        }
        void setLength(int newLength) {
            length = newLength;
        }
        void setWidth(int newWidth) {
            width = NewWidth;
        }
        int getN() {
            return N;
        }
        int getLength() {
            return length;
        }
        int getWidth() {
            return width
        }

        double getEnergy() {

        }

        double SackurTetrode() {
            m = particles[0].getMass();
            U = getEnergy()
            SbyKN = std::log(length*width/N * ((4*pi*m*U)/(3*h**2*N))**1.5) + 2.5;
            return SbyKN;
        }

}

