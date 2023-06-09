```bash
make checkByValgrind
# out as log
make logByValgrind
```

- log

```
==19235== Possible data race during read of size 4 at 0x100008000 by thread #2
==19235== Locks held: none
==19235==    at 0x100003F48: child_fn (main.c:6)
==19235==    by 0x7FF81B1F31D2: ???
==19235==    by 0x7FF81B1EEBD2: ???
==19235==
==19235== This conflicts with a previous write of size 4 by thread #1
==19235== Locks held: none
==19235==    at 0x100003F8F: main (main.c:13)
==19235==  Address 0x100008000 is in a rw- anonymous segment
==19235==
==19235== ----------------------------------------------------------------
==19235==
==19235== Possible data race during write of size 4 at 0x100008000 by thread #2
==19235== Locks held: none
==19235==    at 0x100003F51: child_fn (main.c:6)
==19235==    by 0x7FF81B1F31D2: ???
==19235==    by 0x7FF81B1EEBD2: ???
==19235==
==19235== This conflicts with a previous write of size 4 by thread #1
==19235== Locks held: none
==19235==    at 0x100003F8F: main (main.c:13)
==19235==  Address 0x100008000 is in a rw- anonymous segment
==19235==
==19235== ----------------------------------------------------------------
```