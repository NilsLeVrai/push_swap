void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	int len = lst_size(temp_a);
	while (len/2 < len)
	{
		if (temp_a->quartile == 1)
		{
			pb(a_stack, b_stack);
			temp_b = *b_stack;
			temp_b->quartile = 1;
			if (temp_b->next)
			{
				if (temp_b->next->quartile != 1)
					rb(b_stack);
			}
		}
		else if (temp_a->quartile == 2)
		{
			pb(a_stack, b_stack);
			temp_b = *b_stack;
			temp_b->quartile = 2;
		}
		else 
			ra(a_stack);
		temp_a = *a_stack;
		len--;
	}
	temp_b = *b_stack;

	
	//testing
	//len = lst_size(temp_b);
	int i = 0;
	int cost = 0;
	int max = lst_max(temp_b);
	printf("max = %d\n", max);
	while (i < len/4)
	{
		while (temp_b->value != max)
		{
			temp_b = temp_b->next;
			cost++;
		}
		//if (cost)
	}
	printf("cost = %d\n", cost);
}