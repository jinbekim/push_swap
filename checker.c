#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*astack;
	t_list	*bstack;
	t_list	*inst;

	if (ac == 1)
		return (0);
	make_stack_a(av, &astack);
	make_inst_list(&inst);
	execute_inst(&astack, &bstack, inst);
	if (examine_sort(astack, ac) == -1)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	ft_lstclear(&astack, free);
	ft_lstclear(&bstack, free);
	ft_lstclear(&inst, free);
	return (0);
}
