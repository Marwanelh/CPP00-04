NAME = Animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

INCLUDE_DIRS = \
				./include/

INCLUDE = ${addprefix -I, ${INCLUDE_DIRS}}

SRC = \
				./src/Animal.cpp \
				./src/Cat.cpp \
				./src/Dog.cpp \
				./src/main.cpp \
				./src/WrongAnimal.cpp \
				./src/WrongCat.cpp

OBJ = ${patsubst ./src/%.cpp,./obj/%.o,${SRC}}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o $@

./obj/%.o: ./src/%.cpp | obj_dir
	${CXX} ${CXXFLAGS} ${INCLUDE} -c $< -o $@ 

obj_dir:
	@mkdir -p obj

clean:
	rm -rf obj

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re obj_dir
