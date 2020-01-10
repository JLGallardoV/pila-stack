#include <iostream>
#include <stdlib.h>
using namespace std;
class Stack
{
	
	int MAX_SIZE;
	int *elements;
	int top;
	public:
	Stack(int max_size)
	{
		 	MAX_SIZE=max_size;
		 	elements=new int[max_size];
		 	top=-1;
	}
	void Initialize_stack()
	{
		top=-1;
		//cout<<"Inicializando Stack..."<<endl<<endl;
		//cout<<"-----INICIALIZACION EXITOSA-----"<<endl<<endl;
	}
	bool IsEmptyStack()
	{
		if(top<0)
		{
			return true;
			
		}
		else
		{
			return false;
		}
	}
	bool IsFullStack()
	{
		if(top==MAX_SIZE-1)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
	int stack_pop()
{

		if(IsEmptyStack()==false)
		{
			int tp;
			tp=elements[top];
			top--;
			//cout<<"Extraccion exitosa"<<endl;
			
			return tp;
		}
		else
		if(IsEmptyStack()==true)
		{
				
			cout<<"ERROR! tu pila esta vacia"<<endl;
			return INT_MIN;
		}
		
	}
	void stack_push(int val)
	{
		if(IsFullStack()==false)
		{
			elements[top+1]=val;
			top++;
			cout<<"Insercion exitosa"<<endl;	
		}
		else
		if(IsFullStack()==true)
		{
			cout<<"ERROR! tu pila esta llena y no se puede insertar elementos."<<endl;
		}
		
	}
	void print_stack()
	{
		if(IsEmptyStack()==false)
		{
		cout<<"[";
		for(int i=0;i<=top;i++)//hasta que 0 se 
		{	
			cout<<elements[i]<<" , ";;
		}
		cout<<"]"<<endl;
		}
		else
		if(IsEmptyStack()==true)
		{
			cout<<"Estado:"<<endl<<endl;
		}	
		cout<<endl<<StackSize( )<<endl;
	}
	int peek_stack()
	{
		if(IsEmptyStack()==false)
		{
				return elements[top-1];
		}
		else
		if(IsEmptyStack()==true)
		{
			cout<<"ERROR pila vacia"<<endl<<endl;
			return INT_MIN;
		}
	}
	int StackSize( )
	{
		if(top==-1)
		{
			cout<<"Pila vacia";
			return INT_MIN;
			
		}
		else
		return top+1;
	}	
	void Menu()
	{
	cout<<"Elige una opcion :"<<endl;
	cout<<"1. PUSH"<<endl;	
	cout<<"2. POP"<<endl;	
	cout<<"3. PRINT"<<endl;
	cout<<"4. PEEK"<<endl;
	cout<<"5. EXIT"<<endl;
	}
};
int main()
{
	int N, opcion;
	cout<<"Ingresa la longitud de tu pila:"<<endl;
	cin>>N;
	Stack pila(N);
	pila.Initialize_stack();
	pila.Menu();
	cin>>opcion;
	//pila.Initialize_stack();
	do
	{
		switch(opcion)
		{
			case 1:
				int valor;
				cout<<"Inserta el valor"<<endl;
				cin>>valor;
				pila.stack_push(valor);
				pila.Menu();
				cin>>opcion;
				break;
			case 2:
				int pop;
				pop=pila.stack_pop();
				cout<<pop;
				pila.Menu();
				cin>>opcion;
				break;
			case 3:
				pila.print_stack();
				pila.Menu();
				cin>>opcion;
				break;
			case 4:
				pila.peek_stack();
				pila.Menu();
				cin>>opcion;
				break;
				
		}
	}
	while(opcion!=5);
	
}
