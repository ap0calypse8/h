## wc
This is an implementation of `wc` command in Linux which I   made using C++. 
## Description in Linux 
wc - print newline, word, and byte counts for each file
Print newline, word, and byte counts for each FILE, and a total line if more than one FILE is specified. With no FILE, or when FILE is -, read standard input.

-c, --bytes
print the byte counts
-m, --chars
print the character counts
-l, --lines
print the newline counts
--files0-from=F
read input from the files specified by NUL-terminated names in file F; If F is - then read names from standard input
-L, --max-line-length
print the length of the longest line
-w, --words
print the word counts
--help
display this help and exit
--version
output version information and exit

## My Implementation
The project is made using C++ to count the bytes , words and lines in a given file irrespective of the OS or platform.
Features

- Count bytes in a file
- Count words in a file
- Count lines in a file

## Usage
To use the tool first compile the code by running the following commands on the terminal :
`gcc -o main main.cpp`
Then use the following options to execute the tool :
- `-b`: Count bytes
- `-w`: Count words
- `-l`: Count lines
Example would be as follows :
`./main -b test.txt`
Output :
`342181`

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.









