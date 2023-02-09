#pragma once

// A ball where a Pokemon sleeps.
class Pokeball
{
public:
   Pokeball()
   : _is_empty { true }
   {}
   
   bool empty() const
   {
      return _is_empty;
   }
   
private:
   bool _is_empty;
};
