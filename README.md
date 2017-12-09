DISLAIMER: When using this program multiple times, make sure you delete the previous 'changes.txt' file 

from your last attempt.

# Input/Output:

[main.cpp lines 2-7, 21-22, 44-50, 86-88] (/main.cpp)  [Editor.cpp lines 1-5, 116-118, 122-124] (/Editor.cpp)

At the top of my all of my files for this project I included multiple libraries that would help me in completing

what my goal was this project. Multiple times thoughout my main.cpp file and sometimes in my Editor.cpp file I 

displayed a menu to the user of multiple different options that they could select, as well as gathering their input

after in order to do that action that they requested.


# Control Flow:

[main.cpp lines 36, 58, 63, 68, 73, 78, 90] (/main.cpp)  [Editor.cpp lines 127, 136, 155, 164] (/Editor.cpp)

Here in these two files, I demonstrate how to correctly implement and use if, else if, and else statements. I used 

them mainly for recieving the input of what actions the user would like to perform, making sure to follow each if

statement with and else if to make sure each option is evaluated before a decision is made, and using else just in

case no other options were chosen.

# Iteration:

[main.cpp lines 27, 42, 52, 98] (/main.cpp)

Here I use loops such as while, in order to ask the user multiple times if the desired input is not given, as well

as to print out text from a file, as well as do-while which I used to display the filter menu multiple times so the

user could apply as many filters as they want until they were satisfied.

[Editor.cpp lines 15, 17, 41, 43, 66, 68, 91, 93, 120, 132, 134, 160, 162] (/Editor.cpp)

Here I use multiple for loops to search though each pixel matrix in order to change the rgb values of each pixel

individually. I also use a while loop to display a menu multiple times to the user until the desired input is 

entered.

# Data Structure:

[main.cpp lines 13-19, 95] (/main.cpp) [Editor.cpp lines 11-13, 38-39, 63-64, 88-89, 114, 130. 158, 188] (/Editor.cpp)

Multiple times throughout my main.cpp and Editor.cpp files I declared variables to help me complete a task or get 

user input. All of these variables have appropriated data types for their use, such as the filename variable having

the string datatype, since it will be intaking a whole word.

[Editor.h lines 16, 18, 20, 22, 24, 26] (/Editor.cpp)

All of the functions that I made in my Editor.h have the Pixel data type, since each one of them edit the picture

in some way.

# Function:

[Editor.h lines 16, 18, 20, 22, 24, 26] (/Editor.h)

Here, I demonstrate how to properly declare functions within the '.h' file of your class. Althought it 

would have been much better if I made all the functions pass by reference since they are moving around

a pixel matrix, for the sake of the requirements of this assignment, I kept them all pass by value, and 

only used pass by reference with my save function.

[Editor.cpp lines 9-194] (/Editor.cpp)

Here in the '.cpp' file, is where I include the definitions to each of the functions that I 

previously declared back in the '.h' file. I make sure to include 'Editor::', in the middle of each function 

declaration, so it is known that that function belongs to that certain class.

[main.cpp lines 60, 65, 70, 75, 92, 104] (/main.cpp)

This is where I call each function from my class, making sure to include my object before each name of the function

to specify I want to call the functions from that particular class.

# File IO:

[Editor.cpp lines 27-31, 52-56, 77-81, 102-106, 146-156, 175-179] (/Editor.cpp)

Here, I demonstrated how to write to a file, and I did so to log everytime a change was made to the users image, such

as applying a filter or adding a border.

[main.cpp lines 95-102] (/main.cpp)

Here, I demonstrated how to read from a whole text file. I did this at the end of the program to give the user a 

recap of all the changes they have made to their image.

# Class:

[Editor.h lines 1-30] (/Editor.h)

Here, I show how to properly set up and use your '.h', file when implementing a class. Here is where all the public

and private member variables and functions are stored.

[Editor.cpp lines 1-194] (/Editor.cpp)

Here, I show how the '.cpp', file of your class should properly be set up and use the given variables and functions 

of the '.h' file.

[main.cpp lines 13, 60, 65, 70, 75, 92, 104] (/main.cpp)

Here I show how to use the object created by my class. I have to impliment the object before trying to call any 

function from that particular class, to specify which one I want to use.
