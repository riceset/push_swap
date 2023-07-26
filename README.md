<h1 align="center">
	push_swap
</h1>

<p align="center">
  <img src="https://github.com/riceset/riceset/blob/main/42_badges/push_swape.png" alt="Push_swap 42 project badge"/>
</p>

## Summary
> <i>push_swap is a 42 school algorithm project where we must sort</i>
> <i>a given list of random numbers with a limited set of instructions,</i>
> <i>using the lowest possible number of actions.</i>

## Getting started
First, clone this repository and `cd` into it:

```zsh
$ git clone https://github.com/riceset/push_swap; cd push_swap
```
As this project uses the `libft` you will have to clone it on the root of the repository as well:

```zsh
$ git clone https://github.com/riceset/libft
```

Compile the executable file with:

```zsh
$ make
```

## Usage
Run the program passing a list of numbers to be sorted:


```zsh
$ ./push_swap 88 543 17 999 42
```

The program will print the operations used to sort the list:

```zsh
ra
ra
pb
ra
pb
pa
pa
```

### Operations allowed to be used:

- push (sends the top element of a stack to the top of another stack specified)
- swap (swaps the first 2 elements of a stack)
- rotate (sends the first element of a stack to the end of the same stack)
- reverse rotate (sends the last element of a stack to the beginning of the same stack)

## Observations
In my project, I implemented stacks (an abstract data structure) using a ***circular doubly linked list***. In this model, the `sentinel` is the node between the first and the last node. Also, each node within the list has a pointer point to the next and the previous node.
