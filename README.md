==============================================================
April 10th 2020:

Finished out the game with core game logic.

+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
Progress to this point:

+ Utilized "std::cin >> ..." to take in user input.
+ Learned about a particular issue that can occur when expecting an integer from "cin" and a string character is entered instead.
+ Worked around above^ issue by using "cin.clear()" and "cin.ignore()"
+ Learned that "Ctrl + c" stops program execution in the event of an infinite loop.
+ Learned about escape sequences; specifically "\n".
+ Learned "if () {}" statement syntax.
+ Learned "while () {}" loop syntax.
+ Used the "rand()" function to generate a range of random numbers.
+ Tuned "rand()" generation using "%" and the addition of a value (in this case our difficulty variable). This allows the games difficulty to scale with a range each level that is passed.
+ Added "system("pause")" to keep the window from closing instantly upon loss when running the executable directly.

+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

= The program generates 3 numbers within a random range. These 3 numbers have a SUM and a PRODUCT. The user has to input correctly what the three numbers are. If the user guesses correctly, they move on to the next level with the "difficulty" (literally the range of possible random numbers) increases. After a set number of level's the game is beaten.

==============================================================
==============================================================
April 9th 2020:

This small C++ game was started on April the 7th 2020. I am following a Udemy course (about 3 hours so far) in an effort to learn about C++, primarily for the current purpose of learning to use the Unreal Engine and explore game asset creation, modeling, animating, etc. (Essentially, I would like to be able to perform the "full stack" of game development). It is very ambitious, but the first step has been taken.

As such, the code present in this repository is NOT ENTIRELY of my origin. What this means is that though I am following along with the videos step-by-step and manually entering the code and debugging in order to maximize the educational value, much of the core program is provided for learning purposes through the course.

Personally, I enjoy attempting to alter the code as my abilities improve, or otherwise add in my own personal stylistic changes to make it my own. Essentially, this repo should be viewed as proof of time and effort invested, and a relative skill-level/level of experience. 

The course can be found on Udemy.com with the title: 
"Unreal Engine C++ Developer: Learn C++ and Make Video Games"

Udemy.com share link:
https://www.udemy.com/share/101XRsBkAac1dTR3g=/

All credit excluding my alterations given to Ben Tristem and GameDev.tv

+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
Progress to this point:

+ NEED TO OPEN VS CODE THROUGH THE VISUAL STUDIO COMMUNITY 2019
DEVELOPER CONSOLE WITH COMMAND 'code' OTHERWISE THE PROGRAM WILL NOT COMPILE.
+ Finally had a real life example of the difference between 'compiled at runtime' and 'compiled before runtime (i.e. JavaScript vs C++).
+ Learned about Preprocessor Directives.
+ Learned about Namespaces and the standard namespace.
+ Can output text with 'cout'.
+ Can have basic formatting of text with 'std::endl;'
+ Learned that Unreal Engine 4 (4.22.X) uses UpperCamelCase for nameing conventions. Also not allowed to use '-' or '_' in names.

+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

= The program is outputting text, and providing the sum and product of three integer variables.

==============================================================

