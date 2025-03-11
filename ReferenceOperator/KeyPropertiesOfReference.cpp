/*
1. Must be initialized:-
 A reference can not reference without an initialize variable. it is just a alias
 // int& ref; 
 // Error: Reference must be iniialized

 2. No null Reference
   Unlike pointer, reference can not be null reference

 3. Can not be reassigned
 int x = 10, y = 20;
 int& ref = x;
 ref = y; // Assign's Y value to x(x becomes 20)
 //ref still refer to x, not y.alignas

 4. No memory overhead
 // References don't occupy the seprate memory
 
*/
