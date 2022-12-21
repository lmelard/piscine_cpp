NAME		= megaphone

#------------------------------------------------#
#   INGREDIENTS                                  #
#------------------------------------------------#
# SRCS		source files
#
# OBJS		object files
#
# CPPC		compiler
# CPPFLAGS	compiler flags

SRCS		= ./megaphone.cpp \

OBJS		= ${SRCS:.cpp=.o}

CPPC		= c++
CPPFLAGS	= -Wall -Werror -Wextra -g3 -std=c++98

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM		cleaning command

RM			= rm -rf

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all		default goal
# %.o		compilation .c -> .o
# $(NAME)	link .o -> archive
# clean		remove .o
# fclean	remove .o + binary
# re		remake default goal

%.o: %.cpp
	$(CPPC) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPC) $(CPPFLAGS) -o ${NAME} ${OBJS}
	$(info CREATED $(NAME))

clean:
	$(RM) $(OBJS)
	@echo "REMOVED object files"

fclean: clean
	$(RM) $(NAME)
	@echo "Cleaning done!"

re:
	$(MAKE) fclean
	$(MAKE) all

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#

.PHONY: 	all clean fclean re
.SILENT: