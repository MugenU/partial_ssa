# partial_ssa

MF1933111 於李

---

```c
    *ch2 = 'b';
```
ch2指针指向的内存位置发生了变化

```c
    char **str_ = &str1;
	str1 = ch2;
```
str1指针指向的内存位置发生了变化， *str_指针指向的内存位置发生了变化