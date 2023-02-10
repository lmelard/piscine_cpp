NAME		:= serialize

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

SRC_DIR		:= srcs
SRCS		:= main.cpp \
			Data.cpp \

SRCS		:= $(addprefix $(SRC_DIR)/,$(SRCS))

OBJ_DIR		:= obj
OBJS		:= $(subst .cpp,.o,$(SRCS))
OBJS		:= $(subst $(SRC_DIR),$(OBJ_DIR),$(OBJS))

DEP_DIR		:= dir
DEPS		:= $(subst .cpp,.d,$(SRCS))
DEPS		:= $(subst $(SRC_DIR),$(DEP_DIR),$(DEPS))

CXX			:= c++
CXXFLAGS	:= -Wall -Werror -Wextra -g3 -std=c++98
CPPFLAGS	:= -MMD -I includes

#------------------------------------------------#
#   UTENSILS                                     #
#------------------------------------------------#
# RM		cleaning command

RM			:= rm -rf
DIR_DUP		= mkdir -p $(@D)

#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all		default goal
# %.o		compilation .c -> .o
# $(NAME)	link .o -> archive
# clean		remove .o
# fclean	remove .o + binary
# re		remake default goal


all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(DIR_DUP)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)

-include $(DEPS)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) $(CPPFLAGS) -o ${NAME}
	$(info CREATED $(NAME))


clean:
	@$(RM) $(OBJS) $(DEPS)
	$(RM) -r $(OBJ_DIR) $(DEP_DIR) *_shrubbery
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
