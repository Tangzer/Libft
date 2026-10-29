# libft

My own C standard library, built at École 42 (Brussels) and reused in later projects (ft_printf, minishell, ...).

## Contents

- **libc functions**: `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, `ft_calloc`, `ft_strdup`, ...
- **Extra string helpers**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, ...
- **Output to fd**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked lists**: `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, ...

## Build

```bash
make   # builds libft.a
cc main.c -L. -lft
```
