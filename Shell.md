# Shell00
The Shell00 subject is mostly to help you figure your way around the terminal. This is important expecially during the exams, but also just very helpful in gerneral. It's pretty impossible to navigate without knowing some very basic shell.

Some helpful shell commands
```
list here
```


The mandatory Shell00 assignments (I personally didn't go beyone the mandatory Shell00 and didn't do Shell01)

**Exercise 00: Z**
For this one, have a look at some of the commands in the above list! (Hint - you essentially want to make a folder (Ex00), and a file within that folder (z) that contains a message (Z).

**Exercise 01: testShell00 && Exercise 02: Oh yeah, mooore...**
For these you'll want to know the following information:

[***Changing File Permissions - Oracle Help Centre***](https://docs.oracle.com/cd/E19504-01/802-5750/6i9g464pv/index.html)
| Octal Value | File Permission Set | Permissions Description             |
| ------------| ------------------- | ----------------------------------- |
|      0      |         ---         | No Permissions                      |
|      1      |         --x         | Execute Permissions Only            |
|      2      |         -w-         | Write Permission Only               |
|      3      |         -wx         | Write and Execute Permissions       |
|      4      |         r--         | Read Permissions Only               |
|      5      |         r-x         | Read and Execute Permissions        |
|      6      |         rw-         | Read and Write Permissions          |
|      7      |         rwx         | Read, Write and Execute Permissions |






**Exercise 03: SSH me!**
This is just making the SSH key - you likely already did this when watching the instructional videos!

**Exercise 04: midLS**
For this one you'll want to go to man ls. The following are the secctions from the manual page you'll be looking for:

**Exercise 05: GiT commit**
> Some Helpful Links:<br />
> [Stack Overflow Answer - Git get --source information in --format](https://stackoverflow.com/questions/12712775/git-get-source-information-in-format)<br />
> [Git Log Format Cheat Sheet](https://dev.to/hoanganhlam/git-log-format-string-cheat-sheet-328d)<br />
> [Stack Overflow Answer - Create a shell script that returns the last 5 hash of my commits of my git deposit](https://stackoverflow.com/questions/56840491/create-a-shell-script-that-returns-the-last-5-hash-of-my-commits-of-my-git-depos)<br />
> [Git - Pretty Formats](https://git-scm.com/docs/pretty-formats/2.24.0)<br />

echo ls -mtp > midLS — echoes the list program to the file named midLS 
ex05
git log --format=%H -n5 | sed 's/$/$/'— displays last 5 git commits, formatted as hashes on new lines and adds a dollar sign to the end of each (replacing the hidden dollar sign with a visible one)

