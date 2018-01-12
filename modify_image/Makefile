CC		= 	g++
SRC		= 	modifyImage.cpp
OBJ		= 	$(SRC:.c=.o)
NAME	=	ModifyImage
RM		=	rm
CFLAGS	= 	-Wall -Werror -Wextra -pedantic -g `pkg-config --cflags --libs opencv`

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) -f *~ $(NAME)
oclean:
	$(RM) -f *.o
fclean:
	$(RM) -f *.o *~ $(NAME)
re: oclean *.o all
