Show running processes associated with the current terminal:
<pre>
$ <mark>ps</mark>
    PID TTY          TIME CMD
  25358 pts/1    00:00:00 bash
  25359 pts/1    00:00:00 bash
  83311 pts/1    00:00:00 ps
$ <mark>pstree</mark>
tini─┬─micro-inetd───dropbear───vfs-worker {"pi─┬─tmux
     │                                          └─9*[{vfs-worker {"pi}]
     └─tmux───bash───bash───pstree
</pre>

Show all running processes:
<pre>
$ <mark>ps -e</mark>
    PID TTY          TIME CMD
      1 ?        00:00:08 tini
      7 ?        00:00:00 micro-inetd
  25357 ?        00:00:01 tmux
  25358 pts/1    00:00:00 bash
  25359 pts/1    00:00:00 bash
  81956 ?        00:00:01 dropbear
  81957 ?        00:00:09 vfs-worker {"pi
  82392 pts/2    00:00:00 tmux
  83346 pts/1    00:00:00 ps
$ <mark>ps -aux</mark>
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.0   1104     0 ?        Ss   Feb09   0:08 /mnt/shared/sbin/tini -- /mnt/shared/sbin/micro-inetd 22 /mnt/shared/sbin/dropbear -i
root           7  0.0  0.0   4052   396 ?        S+   Feb09   0:00 /mnt/shared/sbin/micro-inetd 22 /mnt/shared/sbin/dropbear -i -s -m -R
ubuntu     25357  0.0  0.0 133084  3024 ?        Rs   Feb11   0:01 /mnt/shared/sbin/tmux -u2 -L cloud92.2 new -s baochuan@op_sys_383 export ISOUTPUTPANE=
ubuntu     25358  0.0  0.0  11272   244 pts/1    Ss   Feb11   0:00 bash -c export ISOUTPUTPANE=0;bash -l
ubuntu     25359  0.0  0.0  29188 10956 pts/1    S    Feb11   0:00 bash -l
root       81956  0.0  0.0  19376  2120 ?        Ss   16:54   0:01 /mnt/shared/sbin/dropbear -i -s -m -R
ubuntu     81957  0.0  0.0 1252440 48224 ?       Rl   16:54   0:09 vfs-worker {"pingInterval":5000,"nodePath":"/mnt/shared/lib/node_modules","tmuxBin":"/
ubuntu     82392  0.0  0.0 123736  2564 pts/2    Ss+  16:54   0:00 /mnt/shared/sbin/tmux -u2 -L cloud92.2 attach -t baochuan@op_sys_383
ubuntu     83336  0.0  0.0  17264  2456 pts/1    R+   21:25   0:00 ps -aux
</pre>
