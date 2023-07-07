NAME = ZOMBIES

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

CC = c++

FLAGS = -g -std=c++98 -Wall -Werror -Wextra -fsanitize=address

RM = rm -rf

all : $(NAME)

$(NAME): 
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		$(RM) $(NAME)