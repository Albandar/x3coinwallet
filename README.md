**1. Clone wallet sources**

```
git clone https://github.com/x3c/x3coinwallet.git
```

**2. Set symbolic link to coin sources at the same level as `src`. For example:**

```
ln -s ../x3coin cryptonote
```

Alternative way is to create git submodule:

```
git submodule add https://github.com/x3c/x3coin.git cryptonote
```

**3. Build**

```
mkdir build && cd build && cmake .. && make
```
