<p align="center"><img src="https://github.com/glutack/glutack/blob/master/42img/libft_banner.png?raw=true" alt="libft 42 banner 125% 02/06/2022"/></p>

In the `libft` project we are ask to create a library with some home-made functions *(some of them replicate already existing functions)*

## Functions:
| Function | Description |
| :------: | :---------: |
| TRUE(1) / FALSE(0) |
| `int	ft_isalpha(int c)` | Checks if input is a letter in the `ASCII` table |
| `int	ft_isdigit(int c)` | Checks if input is a number in the `ASCII` table |
| `int	ft_isalnum(int c)` | Checks if input is a number or letter in the `ASCII` table |
| `int	ft_isascii(int c)` | Checks if input belongs to the `ASCII` table |
| `int	ft_isprint(int c)` | Checks wether the character is printable |
| MEMORY RELATED |
| `void	*ft_memset(void *b, int c, size_t len)` | Writes *len* bytes of value *c* to the string *b* |
| `void	*ft_bzero(void *s, size_t n)` | Writes *n* zeroes bytes to the string *s* |
| `void	*ft_memcpy(void *dst, const void *src, size_t n)` | Copies *n* bytes from memory area *src* to memory area *dst*. If *dst* and *src* overlap, behaviour is undefined. Applications in which *dst* and *src* might overlap should use MEMMOVE. **Returns** original value of *dst* |
| STR RELATED |
| `size_t	ft_strlen(const char *s)` | Returns lenght of a string |