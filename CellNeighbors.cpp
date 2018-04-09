#include "CellNeighbors.hpp"

const std::list<super_int>&
CellNeighbors::operator()(void)
{
  if (this->_duplicates)
  {
    this->_list.unique();
    this->_list.sort();
    this->_list.unique();
    this->_duplicates = false;
  }
  return this->_list;
}

void
CellNeighbors::append(const super_int id)
{
  this->_list.push_back(id);
  this->_duplicates = true;
  return;
}
