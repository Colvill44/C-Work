struct node *back;

void add_to_back(int n){
	struct node *new_node;
	new_node = (struct node *) malloc(sizeof(struct node));
	if(new_node == NULL){
		printf("Error");
		exit(EXIT_FAILURE);
	}
	new_node.value = back;
	back.value = n;
	new_node.next = NULL;
}