#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#include <string>
#include <iostream>

#include "vanne.h"
class ZoneArrosage
{
private:
    Vanne laVanne;
    int numZone;
public:
    ZoneArrosage(int _numZone,
                 const gpio_num_t _commandeVanne,
                 const gpio_num_t _senseAVanne,
                 const gpio_num_t _senseBVanne,
                 const gpio_num_t _brocheHumidite);
    void Piloter();

    ZoneArrosage(const string _initialisationZone);
    void Piloter();
};

class ZoneArrosage
{
private:
    Vanne *laVanne;
    int numZone;
public:
    ZoneArrosage(const string _initialisationZone);
    void Piloter();
};

#endif // ZONEARROSAGE_H
