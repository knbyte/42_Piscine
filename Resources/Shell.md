# Shell00
The Shell00 subject is mostly to help you figure your way around the terminal. This is important expecially during the exams, but also just very helpful in gerneral. It's pretty impossible to navigate without knowing some very basic shell.

### Some helpful shell commands:
|     Command              | What it does                                                                 |
| -------------------------| ---------------------------------------------------------------------------- |
| mkdir                    | make a directory (folder)                                                    |
| pwd                      | shows the path of your current file location                                 |
| cd [directory]           | change directories                                                           |
| cat [file]               | concatenate, outputs content of a file                                       |
| echo [contents] > [file] | echo displays a string and with > [file] you can write that string to a file |
| mkdir                    | make a directory (folder)                                                    |
| touch
| chmod
| 
| 
| 



The mandatory Shell00 assignments (I personally didn't go beyone the mandatory Shell00 and didn't do Shell01)

### Exercise 00: Z<br />
For this one, have a look at some of the commands in the above list! (Hint - you essentially want to make a folder (Ex00), and a file within that folder (z) that contains a message (Z).

### Exercise 01: testShell00 && Exercise 02: Oh yeah, mooore...<br />
Here are the commands and explanations for Ex01. Then have a go at replicating the effect for the files in Ex02.

To have a look at your current files:
> ```ls``` —  lists files in a directory<br />
```ls -l```  — lists each with permissions, links, user, group, bytes, month, date, time of last modification, and file name<br />

**For this exercise you need to change three aspects of the file.<br />
The date, the permissions and the file size/number of bytes of the file.**

Changing the size of the file: ```dd if=/dev/zero of=testShell00 bs=40 count=1```
> dd  —  used for converting and copying files
    if=[file] — read from input file
        of=[file] — write output to file
            bs=[n] — set input blocks to [n] bytes
            count=[n] — copy [n] input blocks
/dev/zero — a special file that provides null characters (0x00) as requested

Changing the date of the file: ``` touch -mt 202306012342 testShell00```
> touch -t [YYYYMMDDhhmm] [file] — changes the modification and access times of a file

Changing the permissions of the file: ```chmod 455 testShell00```
> chmod [xyz] [file] — command to change permissions of a file or directory, xyz is a 3 digit number, each digit corresponding to the permission of the owner, groups, and others. The value of each digit determines the permissions with binary (7 is 111 in binary which means read, write, execute), the digits can also be calculated with maths, where read is 4, write is 2, and execute is 1, and you add those to get each digit.

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


### Exercise 03: SSH me!<br />
This is just making the SSH key - you likely already did this when watching the instructional videos!
you can use the cat and echo commands together here ```cat ~/.ssh/id_rsa.pub >> id_rsa_pub``` to take public SSH key and write it to a file called id_rsa_pub.
Alternatively you can use ```cat ~/.ssh/id_rsa.pub``` and copy and paste that into your file.


### Exercise 04: midLS<br />
For this one you'll want to go to man ls. The following are the secctions from the manual page you'll be looking for:

echo ls -mtp > midLS — echoes the list program to the file named midLS 


### Exercise 05: GiT commit<br />
> Some Helpful Links:<br />
> [Stack Overflow Answer - Git get --source information in --format](https://stackoverflow.com/questions/12712775/git-get-source-information-in-format)<br />
> [Git Log Format Cheat Sheet](https://dev.to/hoanganhlam/git-log-format-string-cheat-sheet-328d)<br />
> [Stack Overflow Answer - Create a shell script that returns the last 5 hash of my commits of my git deposit](https://stackoverflow.com/questions/56840491/create-a-shell-script-that-returns-the-last-5-hash-of-my-commits-of-my-git-depos)<br />
> [Git - Pretty Formats](https://git-scm.com/docs/pretty-formats/2.24.0)<br />
