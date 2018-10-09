//
//  ParticleSystem.hpp
//  wk06_particle_system
//
//  Created by Tyler Henry on 10/2/18.
//

#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem {
public:
    
    
    
    ParticleSystem();                   // default
    ParticleSystem(glm::vec2 _pos);     // "overload" / alternative
    
    void applyForce(glm::vec2 force);   // applies force to particles
    
    void update(int numNewParticles = 10, int maxParticles = 300);

    
    void draw();
    
    glm::vec2 pos;                      // origin of the particle system
    
    vector<Particle> particles;
};
