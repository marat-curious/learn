# Classes

## Using file redirection

```
$ executable < input_file [ > output_ file]
```

This command will read transactions from a file named `input_file` and write
its output to a file named `output_file` in the current directory.

## Exercises

Assume that all the transactions for each ISBN are grouped together in the input

1.20: Use file `Sales_item.h` to write a program that reads a set of book sales
transactions, writing each transaction to the standard output.
1.21: Write program that reads two `Sales_item` objects that have same ISBN and
produces their sum.
1.22: Write program that reads several transactions for the same ISBN. Write
the sum of all transactions that were read.
1.23: Write a program that reads several transactions and counts how many
transactions occur for each ISBN.
1.24: Test the previous program by giving multiple transactions representing
multiple ISBNs. The records for each ISBN should be grouped together.
