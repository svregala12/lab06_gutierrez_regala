// heap.h
// Binary heap tree header file for CS 24 lab
// Steve Regala | Angel Gutierrez

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap{

 public:

   void push(int value);     // insert value; //duplicates are allowed
   void pop(); // delete the min element 
   int top();
   bool empty();
 
   void minHeapPercolateUp(int nodeIndex);   // use for push algorithm
   void minHeapPercolateDown(int nodeIndex); // use for pop algorithm
    
 private:
   std::vector<int> vdata; //store the binary heap tree as a dynamic array
};

#endif