# Cria's Friday
Cria's Friday is a C++ program that allows you to know if a specif date of the week will be "Cria's Friday" or not.

## What is Cria's Friday?
Cria's Friday is a brazillian meme that mixes the Friday and a social club named by the term "Cria".

<img src="sexta dos cria.jpg">
-Viral video of Cria's Friday

## How does the code work?
The code asks for the day, month and year of a specif date then converts the month and year into days to calculate the total sum of the elapsed days, after this sum the program will subtract this count to -6 to reallocate the Friday to the first day of the week and then checks if the rest of division is 0 or not, if its, it will be Friday, if not, it wont be Friday.

## Known issues
One of the major issues i found was that even with the standardization that i did of dates to identify the day of the week, there is a problem to identify dates from the past, this is due to the fact that over the years days were added, escaping from this standardization.
