```bash
make checkByValgrindFull
# out as log
make logByValgrind
```

- log

```
==14123== Source and destination overlap in strncpy(0x1081091c9, 0x1081091b5, 21)
...
==14123==    by 0x100003F81: main (main.c:14)
```