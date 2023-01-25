NAME		= Harl

#------------------------------------------------#
#   INGREDIENTS                                  #
#------------------------------------------------#
# SRCS		source files
#
# OBJS		object files
#
# CXX		c++ compiler
# CXXFLAGS	compiler flags for C++ source files
# CPPFLAGS	flags for every source files: header...

SRCS		:= ./Harl.cpp \
			./main.cpp \
			
OBJS		:= ${SRCS:%.cpp=%.o}
DEPS		:= ${SRCS:%.cpp=%.d}

CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -g3 -std=c++98
CPPFLAGS	:= -MMD

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM		cleaning command

RM			:= rm -rf

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all		default goal
# %.o		compilation .c -> .o
# $(NAME)	link .o -> archive
# clean		remove .o
# fclean	remove .o + binary
# re		remake default goal

-include $(DEPS)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o ${NAME}
	$(info CREATED $(NAME))

clean:
	@$(RM) $(OBJS) $(DEPS)
	$(info REMOVED OBJS & DEPS)

fclean: clean
	@$(RM) $(NAME)
	$(info REMOVED $(NAME))

re:
	$(MAKE) fclean
	$(MAKE) all

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#

.PHONY: 	all clean fclean re
.SILENT:
