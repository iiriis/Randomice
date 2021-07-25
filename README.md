# Randomice
An Electronic Dice that prevents cheating in board games

## Inspiration
On any occasion, when our cousins or friends come to our place, we sometimes play board games for fun. And there is always a healthy incident of being sneaky or cheating that lifts up everyone's mood. But sometimes, during serious games, we need to be sure that the game is fair, and hence the idea of our project 'Randomice' came into being, where an electronic dice will show random results which will prevent the game from being rigged. 

## What it does
There are several board games and casino games that involve the rolling of dice, and it is often seen how many players cheat their way into winning the game by manipulating the throwing of the physical dice. Even though their skill of dice throwing is impressive, but it is certainly not fair for the other players of the game. Hence, this weekend, to solve this particular problem, we built the Randomice. 
The name 'Randomice' is an amalgamation of the two words 'random' and 'dice'. And just as the name suggests, our project is an electronic adaptation of the physical dice that shows random numbers between one to six. Also, this random digit will be shown in the seven-segment display, as well as the animation feel of the rolling dice will be expressed using the LEDs. 

## How we built it
At first, we started building the simulation of the prototype using Tinkercad. The components used are breadboard, LEDs, Arduino UNO, Seven Segment Display (SSD), and connecting wires. After connecting the LEDs and the SSD to the breadboard and establishing the proper connection of the circuitry with the Arduino using connecting wires, we went onto developing the code. We started with developing the code for generating random numbers. After that, we updated the code with the lighting of LEDs and later synching them with the SSD.  
Once we got the simulation working, and saw that we also had some time in hand, so we went onto developing the real-life hardware working prototype. We made the same connections as we did in Tinkercad using our hardware components, and then uploaded the code to the Atmega328p microcontroller, that we used instead of the Arduino, to make the project look more compact and sturdy.  

## Challenges we ran into
At first, we were not sure if we were going to build any project at all, since our exams are starting in two days, and we had to prepare for that. But then we decided to take a break from studying and build a very simple project during the remaining time of the hackathon, with the sole purpose of learning and exploring. Building this project in under four hours was the biggest challenge of them all. 

## Accomplishments that we're proud of
If we are to say what our greatest accomplishment was, then it was attempting to build this project in midst of all the other chores we had to do. It is truly fulfilling to complete a project, but we think the real accomplishment lies in the efforts. 

## What we learned
We learned about generating random numbers and sequences along with port manipulation. We also realized how important teamwork is and how a small idea can have several other possibilities. 

## What's next for Randomice
We are planning to update Randomice with an OLED display using which users will be able to play games that involve random number generation or random outputs.  
