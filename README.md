# push_swap
A sorting algo project using two stack. 
It is made up of 2 programs.
The first, named checker which takes integer arguments and reads instructions on the standard output.
Once read, checker executes them and displays "OK" if integers are sorted.
Otherwise, it will display "KO". The second one called push_swap which calculates and displays on 
the standard output the smallest program using Push_swap instruction language that sorts integer arguments received.

# Game rules
• The game is composed of 2 stacks named a and b.
• To start with:
◦ a contains a random number of either positive or negative numbers without any duplicates.
◦ b is empty

• The goal is to sort in ascending order numbers into stack a.
• To do this you have the following operations at your disposal:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
ss : sa and sb at the same time.
pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
rra : reverse rotate a - shift down all elements of stack a by 1. The flast element becomes the first one.
rrb : reverse rotate b - shift down all elements of stack b by 1. The flast element becomes the first one.
rrr : rra and rrb at the same time.

# Illustration of the effect of some of these instructions
----------------------------------------------------------------------------------------------------------
Init a and b:
2
1
3
6
8
5
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
1
2
3
6
8
5
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
9
Push_swap Because Swap_push isn’t as natural
a b
----------------------------------------------------------------------------------------------------------

# checker program
Takes in numbers as arguments and waits for you to feed it instruction to sort the stack. If stack is sortted it will display "OK" or "KO" if it is not. You press ctrl + D to get this result.

# push_swap program
• The program displays the smallest list of instructions possible to sort the stack a, the smallest number being at the top.
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa

# How to make:
- run "make" to get the program executables
