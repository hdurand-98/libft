NAME		=	libft.a
DIRSRC		=	./
DIROBJ		=	./
INCLUDE		=	./
SRC			=	ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c  ft_memcpy.c  ft_memset.c  ft_strlcat.c ft_strlen.c  ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c  ft_memmove.c ft_strchr.c  ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c

SRCB		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJB		=	$(SRCB:.c=.o)
OBJ			=	$(SRC:.c=.o)
OBJS		=	$(OBJ:%=$(DIROBJ)/%)

CFLAGS		=	-Wall -Wextra -Werror

CC			=	gcc
AC			=	ar rc
RM			=	rm -f


$(NAME)	:		$(OBJ)
				$(AC) $(NAME) $(OBJS)

clean	:
				cd $(DIROBJ) && $(RM) $(OBJ) $(OBJB)

bonus	:		$(OBJ) $(OBJB)
				$(AC) $(NAME) $(OBJS) $(OBJB)

all		:		$(NAME)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

.PHONY	:		all clean fclean re bonus

%.o		:		$(DIRSRC)/%.c
				$(CC) -I$(INCLUDE) $(CFLAGS) -o $(DIROBJ)/$@ -c $<
