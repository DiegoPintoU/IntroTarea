#include <iostream>
using namespace std;
struct node
{
    int value;
    node *next;
};


void add_node( node *ptr, int value  )
{
    node *new_node = new node;
	node *new_node, *auxiliar; // Crea un auxiliar nodo aparte
    new_node -> value =  value;
    new_node -> next = (ptr -> next);
    ptr -> next = new_node;
}
node *Puntero(Node *lista) { //Crea una lista
	lista = NULL;
}

int main()
{
    node *lista = Puntero(lista);
    node *ptr;
    ptr = new node;
	ptr -> value = 1;
	ptr -> next = NULL;
	
	if(lista == NULL) {
		lista = ptr;
	} else {
		//Agrega nodos al final
		auxiliar = lista;
		while (auxiliar -> next != NULL) {  //Recorre la lista hasta llegar al último
			auxiliar = auxiliar -> next;
		}
		auxiliar -> next = new_node //Aqui avanza al siguiente nodo
		new_node -> next = lista;
		lista = new_node
	}
    add_node(ptr, 2);
	add_node(ptr, 3);
    cout << ptr->value << ptr->next->value<<endl;
	return lista;
    return 0;
}