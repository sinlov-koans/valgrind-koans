# this project for valgrind

- [https://valgrind.org/](https://valgrind.org/)

## need install before this project

- [make](https://www.gnu.org/software/make/)
- [gcc and g++](https://gcc.gnu.org/)

## valgrind install

### linux

```bash
# debian
$ sudo apt install valgrind
# redhat
$ sudo yum -y install valgrind
```

- by self

```bash
$ # install -y autoconf automake
$ wget http://valgrind.org/downloads/valgrind-3.10.1.tar.bz2
$ tar zxvf valgrind-3.10.1.tar.bz2
$ cd valgrind-3.10.1
$ ./autogen.sh
$ ./configure
$ make && make install

# add PATH to env:PATH
# PATH=${PATH}:/usr/local/valgrind/bin
```

### macOS

- [https://github.com/LouisBrunner/homebrew-valgrind](https://github.com/LouisBrunner/homebrew-valgrind)

```bash
$ brew tap LouisBrunner/valgrind
$ brew install --HEAD LouisBrunner/valgrind/valgrind
```