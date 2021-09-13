#include <stdio.h>
#include <stdlib.h>

typdef struct{
	int data;
	Node* next;
}Node;
void printList(Node* head){

	while(head != NULL){
	printf("%d\r\n", head->data);
	head = head->data;
	}	
}

int main(void){

	printf("welcome to git Learning\r\n");
return 0;
}
