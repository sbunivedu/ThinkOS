# Virtual Memory
[source](http://www.greenteapress.com/thinkos/html/thinkos004.html)

The following exmaple shows the location of the following memory segments for
process and the layout:
* text segment (program instructions)
* static segment
* global segment
* heap
* stack

<pre>
gcc -m32 -o aspace aspace.c
$ gcc -m32 -o aspace aspace.c
$ ./aspace
Address of main is 0x804844d
Address of global is 0x804a028
Address of local is 0xffc8ebe4
Address of p is 0x8dd2008
Address of s is 0x8048580
</pre>

The following example demonstrates the directions in which the heap and the
stack grow:

<pre>
$ gcc -m32 -o aspace2 aspace2.c
$ ./aspace2
Address of main is 0x80484c0
Address of global is 0x804a028
Address of local is 0xffd6ae98
Address of p is 0x9fe5008
Address of a is 0xffd66ff0
Address of x is 0xffd66fe8
Address of q is 0x9fe5090
Address of a is 0xffd63140
Address of x is 0xffd63138
Address of q is 0x9fe5118
</pre>

What is wrong with this?

<pre>
$ gcc -m32 undefined.c
$ ./a.out
Segmentation fault
</pre>
