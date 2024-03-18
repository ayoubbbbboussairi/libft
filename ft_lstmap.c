
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstdelone(newlst, del);
			newlst = NULL;
		}
		ft_lstadd_back(&head, newlst);
		lst = lst->next;
	}
	return (head);
}
