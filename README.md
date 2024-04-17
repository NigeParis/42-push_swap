
### PUSH_SWAP

The Push swap project is a very simple and a highly straightforward algorithm project:<br>
data must be sorted.<br>
You have at your disposal a set of integer values, 2 stacks, and a set of instructions<br>
to manipulate both stacks.<br>
Your goal? Write a program in C called push_swap which calculates and displays<br>
on the standard output the smallest program, made of Push swap language instructions,<br>
that sorts the integers received as arguments.<br>



• You have 2 stacks named a and b.<br>
• At the beginning:<br>
◦ The stack a contains a random amount of negative and/or positive numbers<br>

which cannot be duplicated.<br>
◦ The stack b is empty.<br>
• The goal is to sort in ascending order numbers into stack a. To do so you have the<br>
following operations at your disposal:<br>

**sa** (swap a): Swap the first 2 elements at the top of stack a.<br>
  Do nothing if there is only one or no elements.<br>
**sb** (swap b): Swap the first 2 elements at the top of stack b.<br>
  Do nothing if there is only one or no elements.<br>
**ss** : sa and sb at the same time.<br>
**pa** (push a): Take the first element at the top of b and put it at the top of a.<br>
  Do nothing if b is empty.<br>
**pb** (push b): Take the first element at the top of a and put it at the top of b.<br>
  Do nothing if a is empty.<br>
**ra** (rotate a): Shift up all elements of stack a by 1.<br>
  The first element becomes the last one.<br>
**rb** (rotate b): Shift up all elements of stack b by 1.<br>
  The first element becomes the last one.<br>
**rr** : ra and rb at the same time.<br>
**rra** (reverse rotate a): Shift down all elements of stack a by 1.<br>
  The last element becomes the first one.<br>
**rrb** (reverse rotate b): Shift down all elements of stack b by 1.<br>
  The last element becomes the first one.<br>
**rrr** : rra and rrb at the same time.<br>
