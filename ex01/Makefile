NAME = Moar_Brainz

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp ZombieHorde.cpp

CC = c++

FLAGS = -g -std=c++98 -Wall -Werror -Wextra -fsanitize=address

RM = rm -rf

all : $(NAME)

$(NAME): $(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		$(RM) $(NAME)

fclean: clean
			rm -f $(NAME)

re: fclean all