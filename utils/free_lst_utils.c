void	free_lst(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp;

	while (a_stack && *a_stack)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		free(tmp);
	}
	while (b_stack && *b_stack)
	{
		tmp = *b_stack;
		*b_stack = (*b_stack)->next;
		free(tmp);
	}
	a_stack = NULL;
	b_stack = NULL;
}
