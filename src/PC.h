#pragma once

#include <vector>
#include <memory>

#include "Pokemon.h"

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC
{
public:
   std::vector<PokemonPtr>& pokemons()
   {
      return _pokemons;
   }

private:
   std::vector<PokemonPtr> _pokemons;
};
