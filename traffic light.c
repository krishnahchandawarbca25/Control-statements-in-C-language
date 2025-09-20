#include <stdio.h>
void main()

{
  enum TrafficLight { RED, GREEN, YELLOW };

  enum TrafficLight light = RED;

  switch (light) 
  
    case RED: printf("Stop!\n"); light = GREEN; break;

    case GREEN: printf("Go!\n"); light = YELLOW; break;

    case YELLOW: printf("Slow down!\n"); light = RED; break;
    
    default: printf("Unknown signal.\n");
  
}