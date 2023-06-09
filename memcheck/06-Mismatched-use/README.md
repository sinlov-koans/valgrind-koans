```bash
make checkByValgrindFull
# out as log
make logByValgrind
```

- log

```
==16977== Mismatched free() / delete / delete []
...
==16977==    by 0x100003F81: main (main.cpp:11)
==16977==  Address 0x1001b7dd0 is 0 bytes inside a block of size 10 alloc'd
...
==16977==    by 0x100003F2F: main (main.cpp:6)
```