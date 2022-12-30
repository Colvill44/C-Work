struct node *front;

void remove_from_front(){
	if(front == NULL){
		return;
	}
	
	struct node *cur, *tmp;
	cur = front.next;
	tmp = front;
	front = cur;
	free(tmp);
}