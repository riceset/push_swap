<h1 align="center">
	push_swap
</h1>

<p align="center">
	<b><i>Because swap_push isn’t as natural.</i></b><br>
</p>

## Summary
> This project will make you sort data on a stack, with a limited set of instructions, using
> the lowest possible number of actions. To succeed you’ll have to manipulate various
> types of algorithms and choose the most appropriate solution (out of many) for an
> optimized data sorting.

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
