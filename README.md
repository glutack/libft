<p align="center"><img src="https://github.com/glutack/glutack/blob/master/42img/libft_banner.png?raw=true" alt="libft 42 banner 125% 02/06/2022"/></p>

In the `libft` project we are ask to create a library with some home-made functions *(some of them replicate already existing functions)*

## Functions:
|  **TRUE / FALSE** | --- |
| :-------- | :--------- |
| [`int	ft_isalpha(int c)`](https://github.com/glutack/libft/blob/master/src/ft_isalpha.c) | Checks if input is a letter in the `ASCII` table |
| [`int	ft_isdigit(int c)`](https://github.com/glutack/libft/blob/master/src/ft_isdigit.c) | Checks if input is a number in the `ASCII` table |
| `int	ft_isalnum(int c)` | Checks if input is a number or letter in the `ASCII` table |
| `int	ft_isascii(int c)` | Checks if input belongs to the `ASCII` table |
| `int	ft_isprint(int c)` | Checks wether the character is printable |
---
| **STR MEMORY RELATED** | --- |
| :-------- | :--------- |
| `void	*ft_calloc(size_t count, size_t size)` | Allocates enough memory for `count` objects that are `size` bytes of memory |
| `char *ft_strdup(const char *s1)` | Allocates enough memory for a copy of str `s1`, does the copy. **Returns _a pointer to the copy, NULL if insufficient memory_** |
| `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates enough memory for a copy of `s1` from `start` byte to `len` bytes. **Returns _a pointer to the copy, NULL if insufficient memory_**
| `char	*ft_strjoin(char const *s1, char const *s2)` | Allocates enough memory for a copy of str `s1` and `s2` concatenated. **Returns _a pointer to the new str_**
| `char	*ft_strtrim(char const *s1, char const *set)` | Erases all chars in str `set` from str `s1` until it finds a char that doesn't exist in `set`. **Returns _resulting allocated str_** 
| `char	**ft_split(char const *s1, char c)` | Creates and array of str, resulting of separating str `s1` using `c` as delimiter and finishes with a NULL pointer. **Returns _array of strings_** |
---
| **STR** | --- |
| :-------- | :--------- |
| `void	*ft_bzero(void *s, size_t n)` | Writes `n` zeroes bytes to the string `s` |
| `void	*ft_memset(void *b, int c, size_t len)` | Writes `len` bytes of value `c` to the string `b` |
| `void	*ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from memory area `src` to memory area `dst`. If `dst` and `src` overlap, behaviour is undefined. Applications in which `dst` and `src` might overlap should use MEMMOVE. **Returns _original value of `dst`_** |
| `void	*ft_memmove(void *dst, const void *src, size_t len)` | Copies `n` bytes from str `src` to str `dst`. The strings may overlap, the copy is done in a non-destructive manner. **Returns _original value of `dst`_**
---
| **STR LENGHT RELATED** | --- |
| :-------- | :--------- |
| `size_t	ft_strlen(const char *s)` | **Returns _lenght of a string_** |
| `size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copies up to `dstsize` - 1 from `src` to `dst` |
| `size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)` | Appends str `src` to the end of `dst`. Appends at most `dstsize` - `strlen(dst)` - 1 characters. It NUL-terminates unless `dstsize` is 0 or original str was longer than `dstsize`. If `src` and `dst` strings overlap, behavious is undefined. **Returns _initial lenght of `dst` + lenght of `src`_** |
---
| **STR TRANSFORMATION** | --- |
| :-------- | :--------- |
| `int	ft_atoi(const char *str)` | **Returns _inital portion of str converted to int_** |
| `char	*ft_itoa(int n)` | **Returns _an allocated str representing int value_**
| `int	ft_toupper(int c)` | If `c` it's lowercase, it makes it uppercase |
| `int	ft_tolower(int c)` | If `c` it's uppercase, it makes it lowercase |
| `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` function to every char in str `s`. **Returns _new str after `f` is applied_**
| `char	*ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies `f` function to every char in str `s`. **Returns _new str after `f` is applied_**
| **STR COMPARING**  | --- |
| :--------: | :---------: |
| `char	*ft_strchr(const char *s, int c)` | Locates first occurrence of `c` int str `s`, '\0' considered. **Returns _pointer to located char or NULL if no `c` in `s`_** |
| `char *ft_strrchr(const char *s, int c)` | `strchr` but reverse |
| `int	ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares `s1` and `s2` up to `n` characters. Designed for comparing strings rather than binary data. **Returns _int according as `s1` is greater, equal or less than `s2`_** |
| `void	ft_memchr(const void *s, int c, size_t n)` | Locates first occurrence of `c` in string `s` up to `n` bytes. **Returns _pointer to byte located or NULL if no `c` in `s`_** |
| `int	ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares bytes str `s1` against byte str `s2`, both assumed to be `n` bytes long. **Returns _int according as `s1` is greater, equal or less than `s2`_** |
| `char	*ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates first occurrence of str `needle` int str `haystack` up to `len` chars. **Returns _pointer to `needle` in `haystack`_, if `needle` is empty, it returns _haystack_, if no needle it returns _NULL_** |
| **FD** | --- |
| :--------: | :---------: |
| `void	ft_putchar_fd(char c, int fd)` | Sends char `c` to `fd` |
| `void	ft_putstr_fd(char *s, int fd)` | Sends str `s` to `fd` |
| `void	ft_putendl_fd(char *s, int fd)` | Sends str `s` to `fd` followed by a '\n' |
| `void	ft_putnbr_fd(int n, int fd)` | Sends int `b` to fd |
| **LIST** | --- |
| :--------: | :---------: |
| `typedef struct s_list` | Contains `void	*content` and `struct s_list	*next` |
| `t_list	*ft_lstnew(void *content)` | Allocates a new node, variable content initializes with `content` and next with `NULL` |
| `void	ft_lstadd_front(t_list **lst, t_list *new)` | Allocates a new node and adds it at the start of `lst` |
| `int	ft_lstsize(t_list *lst)` | Counts the number of nodes in `lst`. **Returns _int number_**|
| `t_list *ft_lstlast(t_list *lst)` | Finds the last node of `lst`. **Returns _last node_**|
| [`void	ft_lstadd_back(t_list **lst, t_list *new)`](https://github.com/glutack/libft/blob/master/src/ft_lstadd_back_bonus.c) | Adds a new last node in `lst`|
| **MY OWN FUNCTIONS** | Functions not specified for LIBFT project that I've created while doing other projects |
| :--------: | :---------: |
| `void	ft_free_split(char **ptr)` | Frees all strings int a str array |