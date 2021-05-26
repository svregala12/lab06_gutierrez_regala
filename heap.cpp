// heap.cpp
// Steve Regala | Angel Gutierrez

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){

  vdata.push_back(value);
  minHeapPercolateUp(vdata.size() - 1);

}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){

  if (vdata.size() == 0) {
    return;
  }

  else {
    std::swap(vdata[0], vdata[vdata.size()-1]);
    vdata.pop_back();
    minHeapPercolateDown(0);
  }

}

// Returns the minimum element in the heap
int Heap::top(){

  if (vdata.size() == 0) {
    return -1;
  }

  return vdata[0];

}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){

  if(vdata.size() == 0) {
      return true;
    }

  return false;

}

void Heap::minHeapPercolateUp(int nodeIndex) {

  int parentIndex;

  while (nodeIndex > 0)
  {
    parentIndex = (nodeIndex - 1)/2;

    if (vdata[nodeIndex] >= vdata[parentIndex]) {
      return;
    }

    else {
      std::swap(vdata[nodeIndex], vdata[parentIndex]);
      nodeIndex = parentIndex;
    }
  }

}

void Heap::minHeapPercolateDown(int nodeIndex) {

  int childIndex = 2*nodeIndex + 1;
  int val = vdata[nodeIndex];
  int minValue;
  int minIndex;

  while (childIndex < vdata.size()) 
  {
    // find the min among the node and all node's children
    minValue = val;
    minIndex = -1;
    int parentIndex = (nodeIndex - 1)/2;

    for (int i=0; i<2 && (i + childIndex) < vdata.size(); i++) {
      if (vdata[i + childIndex] < minValue) {
        minValue = vdata[i + childIndex];
        minIndex = i + childIndex;
      }
    }

    if (minValue == val) {
      return;
    }

    else {
      std::swap(vdata[nodeIndex], vdata[minIndex]);
      nodeIndex = minIndex;
      childIndex = 2*nodeIndex + 1;
    }
  }

}