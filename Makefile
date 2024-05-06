###############################################################################
## ARGUMENTS

NAME= push_swap
BONUS= checker
COUNTER= checker_counter
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

INCLUDE= -I./usr/include/

SRC=  ./src/pushswap.c ./src/input/get_check.c ./src/input/check.c
SRC+= ./src/input/clean_zeros.c ./src/input/get_split.c 
SRC+= ./src/input/get_stack.c ./src/input/check_first_arg.c 
SRC+= ./src/tools/free_errors.c 
SRC+= ./src/tools/stack_funtions.c ./src/tools/rev_rotate_node.c
SRC+= ./src/tools/lst_funtions.c ./src/tools/swap_node.c
SRC+= ./src/tools/push_node.c ./src/tools/rotate_node.c 
SRC+= ./src/tools/update_node_id.c ./src/tools/search_in_node.c
SRC+= ./src/sort/sort_three.c ./src/sort/sort_five.c ./src/sort/sort_big.c

BONUS_SRC=

LIBFT= ./libft/libft.a
FT_PRINTF= ./ft_printf/libftprintf.a
GET_NEXT_LINE= ./get_next_line/get_next_line_bonus.a

HEADER=push_swap.h
HEADER_BONUS=push_swap.h

###############################################################################
## RULES

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating FILE .......\n"
	@make -C ./libft/ bonus >/dev/null
	@make -C ./ft_printf/ all >/dev/null
	@make -C ./get_next_line/ all >/dev/null
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(FT_PRINTF) $(GET_NEXT_LINE) \
	>/dev/null

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@echo "COMPILE all c files to .o FILES .......\n"
	@$(CC) $(CFLAGS) -c $(SRCS)  $(HEAD) >/dev/null

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJ)
	@echo "Creating FILE .......\n"
	@make -C ./libft/ bonus >/dev/null
	@make -C ./ft_printf/ all >/dev/null
	@make -C ./get_next_line/ all >/dev/null
	@make -C ./my_checker/ all >/dev/null

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@echo "COMPILE all c files to .o FILES .......\n"
	@$(CC) $(CFLAGS) -c $(BONUS_SRCS) $(HEAD_BONUS) >/dev/null


counter: $(COUNTER)

$(COUNTER): $(BONUS_OBJ)
	@echo "Creating FILE .......\n"
	@make -C ./libft/ bonus >/dev/null
	@make -C ./ft_printf/ all >/dev/null
	@make -C ./get_next_line/ all >/dev/null
	@make -C ./my_checker/ bonus >/dev/null

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@echo "COMPILE all c files to .o FILES .......\n"
	@$(CC) $(CFLAGS) -c $(BONUS_SRCS) $(HEAD_BONUS) >/dev/null



lib:
	@make -C ./libft/ re >/dev/null
	@make -C ./ft_printf/ re >/dev/null
	@make -C ./get_next_line/ re >/dev/null

libclean:
	@make -C ./libft/ clean >/dev/null
	@make -C ./ft_printf/ clean >/dev/null
	@make -C ./get_next_line/ clean >/dev/null

libfclean:
	@make -C ./libft/ fclean >/dev/null
	@make -C ./ft_printf/ fclean >/dev/null
	@make -C ./get_next_line/ fclean >/dev/null

clean: libclean
	@rm -f $(OBJ) >/dev/null
	@make -C ./my_checker/ clean >/dev/null

fclean:clean libfclean
	@echo "FCLEAN all .o et .a files .......\n"
	@rm -f $(NAME) >/dev/null
	@make -C ./my_checker/ fclean >/dev/null

re: fclean libfclean lib all
	@echo "All erased and re-compiled .......\n"

.PHONY: all bonus counter lib libclean clean fclean re
