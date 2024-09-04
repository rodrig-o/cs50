## Resume cs50 ##
<h1>Introduction to computer science</h1>

<h2>WEEK 0 </h2>  

**Binary system**

Base-2 system

2<sup>2</sup>  2<sup>1</sup>  2<sup>0</sup>	← exponents 	<br>
4  2  1<br>
N  N  N

Considering Decimals…

123 one hundred twenty three

    100	10	1
    *	*	*
    1	2	3
    =	=	=
    100+	20+	3

So..

To represent a given number in binary you do this
For 6

    4	2	1
    *	*	*
    1	1	0	← binary
    =	=	=
    4+	2+ 	0	=6


    8	4	2	1
    1	0	0	1	← binary for 9
    0	1	1	0	← 6
    0	0	1	1	← 3

Byte = 8 bits <br>

    128	64	32	16	8	4	2	1 
    1	1	1	1	1	1	1	1	=255 
Or you can calculate it by doing 2<sup>8</sup> that equals to 256 possibilities, considering zero

    0	1	0	0	0	0	0	1	=65 or A  
ASCII = American Standard Code for Information Interchange

Unicode could use 16 or 32bits, which results in roughly 4billions digits

For representing colour in RGB, each colour R contains 1 byte and the same applies to G and B, thus each pixel contains 3 bytes. So if an image file size is 3mb, it contains 3 million bytes, or 1 million pixels

For music one could use the same principle and use three values, one for the note itself, second value to the duration and third to volume.

For video..

**Algorithm is physical → Code is digital**

The search algorithm more efficient to find information divides the remaining amount by half at each step and discard the half that do not containing the results we are looking for. This allows to jump large chunks of irrelevant data


<h2>WEEK 1 - C </h2>

In terminal type

    $ code hello.c
create file "code" with extension ".c"

type the code in the file, then compile it with

    $ make hello
note that there is no need to include ".c"<br>
to run the code type

    $ ./hello

The following code is an example:

    # include <cs50.h>
    # include <stdio.h>
    
    int main(void)
    {
        string answer = get_string("What's your name? ");
        printf("Hi %s, nice to meet you!\n", answer);
    }

the **<cs50.h>** has the function "**get_string()**" and others<br>

<h3>loops</h3>
for and while

    // use for when there is a defined amount of times to run
    for(start,expression,increment)
    
    while(true)
    
    // do function run at least once before verify the condition 
    do
    {
    }
    while(true)


<h3>command line</h3>
when copying an entire folder include **-r** before folder name in order to make the command recursive to inner folders

    $ cp -r folder1 folder_new

remove files and folders

    $ rm hello.c
    $ rm -f hello.c   // deletes without confirmation
    $ rm -r folder_new

to check differences between files type

    $ diff [OPTION} file1 file2
    // example
    $ diff --normal hello.c pset0/hi.c
    
