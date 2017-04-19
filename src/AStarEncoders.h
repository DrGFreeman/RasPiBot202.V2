/*
AStarEncoders.h
Source: https://github.com/DrGFreeman/RasPiBot202.V2

MIT License

Copyright (c) 2017 Julien de la Bruere-Terreault <drgfreeman@tuta.io>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
An encoder class to read quadrature encoders on the Pololu AStar microcontroller
*/

#ifndef AStarEncoders_h
#define AStarEncoders_h

#include <Arduino.h>
#include <AStar32U4.h>
#include <FastGPIO.h>

class AStarEncoders
{
public:
  // Constructor
  AStarEncoders();

  // Get left counts
  int getCountsLeft();

  // Get right counts
  int getCountsRight();

  // Get left counts and reset left counts
  int getCountsLeftAndReset();

  // Get right counts and reset right counts
  int getCountsRightAndReset();
}:

#endif
