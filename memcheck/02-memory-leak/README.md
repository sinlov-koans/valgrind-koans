```bash
make checkByValgrindFull
# out as log
make logByValgrind
```

- log

```

# There is memory space that is not freed

==52445==  Address 0x1001b7df8 is 0 bytes after a block of size 40 alloc'd
...
==52445==    by 0x100003F71: f (membase.c:4)

==15226== 4 bytes in 1 blocks are definitely lost in loss record 1 of 34
...
==15226==    by 0x100003F98: main (main.c:6)
```