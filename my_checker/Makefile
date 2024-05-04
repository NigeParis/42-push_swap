###############################################################################
## ARGUMENTS

NAME= ../checker
BONUS= push_bonus
CFLAGS= -Wall -Wextra -Werror -g3

SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

BONUS_SRCS=$(addprefix $(SRC_DIR), $(BONUS_SRC))
BONUS_OBJ=$(BONUS_SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

HEAD_BONUS=$(addprefix $(INCLUDE), $(HEADER_BONUS))
HEAD=$(addprefix $(INCLUDE), $(HEADER))

CC=cc

###############################################################################
## SOURCES 

SRC_DIR=
OBJ_DIR=

INCLUDE= -I../usr/include/

SRC=  ./main.c ./checker_input/get_check.c 
SRC+= ./checker_input/check.c ./free_errors.c 
SRC+= ./checker_input/clean_zeros.c ./checker_input/get_split.c 
SRC+= ./checker_input/get_stack.c ./checker_input/check_first_arg.c 
SRC+= ./checker_tools/stack_funtions.c ./checker_tools/rev_rotate_node.c
SRC+= ./checker_tools/lst_funtions.c ./checker_tools/swap_node.c
SRC+= ./checker_tools/push_node.c ./checker_tools/rotate_node.c 
SRC+= ./checker_tools/update_node_id.c ./checker_tools/search_in_node.c

BONUS_SRC= 

LIBFT= ../libft/libft.a
FT_PRINTF= ../ft_printf/libftprintf.a
GET_NEXT_LINE= ../get_next_line/get_next_line_bonus.a

HEADER=checker.h
HEADER_BONUS=checker.h

###############################################################################
## RULES

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating FILE .......\n"
	@make -C ../libft/ bonus
	@make -C ../ft_printf/ all
	@make -C ../get_next_line/ all
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@echo "COMPILE all c files to .o FILES .......\n"
	@$(CC) $(CFLAGS) -c $(SRCS)  $(HEAD)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJ)
	@echo "Creating FILE .......\n"
	@make -C ../libft/ bonus
	@make -C ../ft_printf/ all
	@make -C ../get_next_line/ all
	@$(CC) $(CFLAGS) -o $(BONUS) $(BONUS_OBJ) $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@echo "COMPILE all c files to .o FILES .......\n"
	@$(CC) $(CFLAGS) -c $(BONUS_SRCS) $(HEAD_BONUS)

lib:
	@make -C ../libft/ re 
	@make -C ../ft_printf/ re
	@make -C ../get_next_line/ re

libclean:
	@make -C ../libft/ clean
	@make -C ../ft_printf/ clean
	@make -C ../get_next_line/ clean

libfclean:
	@make -C ../libft/ fclean
	@make -C ../ft_printf/ fclean
	@make -C ../get_next_line/ fclean

clean: libclean
	@rm -f $(OBJ)
	@rm -f $(BONUS_OBJ)

fclean:clean libfclean
	@echo "FCLEAN all .o et .a files .......\n"
	@rm -f $(NAME)
	@rm -f $(BONUS)

re: fclean libfclean lib all
	@echo "All erased and re-compiled .......\n"

.PHONY: all bonus lib libclean clean fclean re
