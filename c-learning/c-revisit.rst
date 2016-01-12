Notes
=====

#. Pointers are special variables used to store address of another variable
#. Pointers can be used to alter multiple variables through function
#. Ampersand(&) front of variable will get its address
#. Asterisk(*) (pointer) will return value stored at given variable
#. Conversion specifier for pointers is ``%p``
#. During execution, memory for variables are assigned by OS
#. By passing a pointer to a function one can allow function to read/write to the 
   data stored in that variable
#. Changing the address value manually in a pointer could lead to segmentation
   fault, as it would tries to access segment of memory which it doesn't has permission
#. Structured data types: arrays and structs
#. ``Struct`` is a variable too
#. Default variables in ``C`` fall in auto storage class, means they get created and freed
   automatically (destroyed when out of the scope, to free memory)
