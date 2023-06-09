```bash
make checkByValgrindFull
# out as log
make logByValgrind
```

- log

```
==13250== Conditional jump or move depends on uninitialised value(s)
==13250==    at 0x100003F9F: ??? (in ./main)
==13250==    by 0x10000E41E: (below main) (in /usr/lib/dyld)
==13250==  Uninitialised value was created by a stack allocation
==13250==    at 0x100003F90: ??? (in ./main)
```