#pragma once

#include <memory>

#include "Pokemon.h"

// A ball where a Pokemon sleeps.
class Pokeball
{
public:   
   const Pokemon& pokemon() const
   {
      return *_pokemon;
   }
   bool empty() const
   {
      return _pokemon == nullptr;
   }

   void store(PokemonPtr pokemon) 
   {
      _pokemon = std::move(pokemon);
   }

private:
   PokemonPtr _pokemon;
};
