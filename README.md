# Input Device
The .ino file is originally used for a real life swordfight game. 
But maybe you can do much more with the concept!

# Usage
We used this code on a Teensy++ 2.0, it is meant to make
a game where you have to hit the other player on various 
places of the body. Of course it is a real-life game
and the hits are detected via an aluminum plated sword
and aluminum plates on the player. Also the player has
to wear conducting gloves to conduct the current to the 
sword. This way you can also detect which hand is used
so you can disable broken arms for example.

# Setup
Led indicates hit.

For player1 pin 38 and 39 are left and right hand.
Pin 40 41 42 43 44 45 are the pins for player1 
where the aluminum is attached. (So if pin 10
or 11 from player2 hit one of the six pins from
player1 (40 41 42 43 44 45) a hit is detected.

For player2 pin 10 and 11 are left and right hand.
Pin 12 13 14 15 16 17 are the pins for player2 
where the aluminum is attached. (So if pin 38
or 39 from player1 hit one of the six pins from
player2 (12 13 14 15 16 17) a hit is detected.

Each combination of hit is given an unique key combination.

