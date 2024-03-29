<div><h1 align="center">Functions, nested loops</h1> </div>

<details>
<summary><h2>Functions</h2></summary>

A function is a group of statements that together perform a task and every program has at least one function that is **main** and all other less trivial programs can define additional functions.
You can divide your code into separate functions.
A function declaration tells the compiler about the name of a function, the return type and the parameters.

</details>

<details>
<summary><h2>Returns</h2></summary>
This instruction terminates execution and returns control to the calling function.

**return;**
if the value of the expression is omitted the returned value will be undefined.

**return 0** expressions are optional.
 if not specified, they describe "right" (0) or wrong a value other than 0
</details>

<details>
<summary><h2>Parts of a function</h2></summary>

**prototype of a function**
* indicates the type of return
* the number of arguments received
* the data types of each of the received arguments
* in what order they are passed

**body**
* contains a collection of declarations that define what the function does. 
![image text](https://dotnettutorials.net/wp-content/uploads/2020/10/word-image-22.png)
### Nested loops
A nested loop is a loop that is included in the statement block of another block. Loops can have any level of nesting, en los bucles anidados es importante utilizar variables de control distintas, para no obtener resultados inesperados.

Nested loops with independent variables are loops in which none of the variables in one of the loops is involved in either the continuation condition or the step expression of the other loops.
* **example**

![image text](https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_5/chapter5_images/5_22.png)

### Arrays
An array is a means of storing a set of objects of the same class.
Where number_of_items is a constant number (not a variable)
A pointer to that variable points to a memory address,Where number_of_items is a constant number (not a variable)
A pointer to an array points to the memory address of the first value of that array, value 0.
![image text](http://microchip.wdfiles.com/local--files/tls2101:pointers-strings/PointerToString.png)
### logical operators
**||** OR, **&&** AND, **!** NOT
</details>

<details>
<summary><h2>details</h2></summary>

### Errors

lvalue required as left operand of assignment

### Returns

```c
return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
```
Evaluate if it is between the list of characters, and returns True if it is a housing of the alphabet but false

```c
return number < 0 ? -number : number;
```

Check the sign of the number given and return its absolute value

</details>