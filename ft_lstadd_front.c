void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//리스트의 첫번째 노드를 가리키는 포인터의 주소.
	// lst =&p == lst 가리킨다 p를. *lst = p
	//리스트에 추가되는 노드를 가리키는 포인터의 주소. 포인터의 주소인데 이건 왜 이중포인터가 아님?
	//리스트의 맨 처음에 new를 추가하는 함수
	//그럼 new가 리스트를 가리키면 되겠네
	new.next = *lst; // 첫번째 노드를 가리키는 포인터.
	ㅁㅁㅁ
