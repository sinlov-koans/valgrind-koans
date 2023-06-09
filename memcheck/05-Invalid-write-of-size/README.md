```bash
make checkByValgrindFull
# out as log
make logByValgrind
```

- log

```
==14636== Invalid write of size 4
==14636==    at 0x100003FA1: main (main.c:5)
==14636==  Address 0x1001b7df8 is 0 bytes after a block of size 40 alloc'd
...
==14636==    by 0x100003F98: main (main.c:4)
```