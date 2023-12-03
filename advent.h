#ifndef ADVENT_H
# define ADVENT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*copy_new_line(char *line);
char	*ft_read_line(int fd, char *reading_line);
char	*go_to_next_line(char *line);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*pre_ft_strjoin(char *line, char *temp_buffer);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
int	    ft_1(char **arr);
int     ft_2(char **arr);
void	ft_freeall(char **arr);
int	    main(int argc, char **argv);
int	    ft_isdigit(int c);
int	    ft_strncmp(const char *s1, const char *s2, unsigned int n);

#endif