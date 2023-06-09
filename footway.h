/*footway.h*/

//
// A footway / path in the Open Street Map.
// 
// Mark Fortes
// Northwestern University
// CS 211: Winter 2023
//

#pragma once

#include <vector>

#include "building.h"

using namespace std;


//
// Footway
//
// Stores info about one footway in the map.  The ID uniquely identifies
// the footway.  The vector defines points (Nodes) along the footway; the
// vector always contains at least two points.
//
//
class Footway
{
public:
  long long ID;
  vector<long long> NodeIDs;

  //
  // constructor
  //
  Footway(long long id);

  //
  // intersectWithBuilding
  // 
  // Checks to see if this footway intersects with the given building,
  // i.e. shares a node in common. Returns true if so, false if not.
  //
  bool intersectWithBuilding(Building& B);

  //
  // adds the given nodeid to the end of the vector
  //
  void add(long long nodeid);

};
