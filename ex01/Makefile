NAME		:= a.out

#SOURCES_____________________________________________________________

SRCS		:=	main.cpp Fixed.cpp

#OBJECT______________________________________________________________

BUILD_DIR	:= .build
OBJS		:= $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

#FLAGS_______________________________________________________________

CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g
RM			:= rm -f
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

#COLORS______________________________________________________________

GREEN	=	\033[0;32m
RED		=	\033[0;31m
WHITE	=	\033[0;97m
RESET	=	\033[0m
YELLOW 	=	\033[0;93m


#MAIN_RULE___________________________________________________________

all: $(NAME)

$(NAME): $(OBJS)
	@echo -n "$(YELLOW)Compiling	${WHITE}→	$(YELLOW)$(NAME)$(RESET) "
	@echo "$(GREEN)[ok]✓$(RESET)"
	@$(CC) $(OBJS) -o $(NAME)

#OBJECT_RULE_________________________________________________________

$(BUILD_DIR)/%.o: %.cpp
	$(DIR_DUP)
	$(CC) $(CFLAGS) -c -o $@ $<

#CLEAN_RULE__________________________________________________________

clean:
	@echo -n "$(RED)Deleting	${WHITE}→	$(RED)$(NAME) object$(RESET) "
	$(RM) -r $(BUILD_DIR)
	@echo "$(GREEN)[ok]$(RED)✗$(RESET)"

fclean: clean
	@echo -n "$(RED)Deleting	${WHITE}→	$(RED)$(NAME) executable$(RESET) "
	$(RM) $(NAME)
	@echo "$(GREEN)[ok]$(RED)✗$(RESET)"

re: fclean all

#SPEC________________________________________________________________

.PHONY: clean fclean re
.SILENT:
