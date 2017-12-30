#include "LinkedList.h"
#include <iostream>
using namespace std;

//LinkedList::Constructor - Basic
LinkedList::LinkedList() 
{
	Count = 0;
	Head = NULL;
}

//LinkedList::Constructor - overrode
LinkedList::LinkedList(const LinkedList& L)
{
	Count = 0;
	Head = NULL;

	//TODO: L with somethings
	Count = L.Count; 
	if (L.Head == NULL)
		Head = NULL;
		else
		{
			Head = new node; 
				Head->Data = L.Head->Data; 
				node_ptr Temp1 = Head;
				for (node_ptr Temp2 = L.Head->Next; Temp2 != NULL; Temp2 = Temp2->Next)
				{
					Temp1->Next = new node; 
						Temp1 = Temp1->Next; 
						Temp1->Data = Temp2->Data; 
				}
			Temp1->Next = NULL; 
		}
}

//LinkedList::Destructor
LinkedList::~LinkedList() 
{
	Deletion();
}

//LinkedList::insert
void LinkedList::Insert(int Position, item input_Item) 
{
	
}

//LinkedList::delete a one node
void LinkedList::Delete(int Position)
{
	node_ptr Temp;
	if (IsEmpty())
		cout << "Deletion on Empty List"; 
	else if ((Position > Count) || (Position < 1))
		cout << "Position out of Range"; 
	else
	{
		if (Position == 1) 
		{ 
			node_ptr p = Head; 
			Head = Head->Next; 
		}
		else 
		{
			for (int i = 1; i < (Position - 1); i++)
			Temp = Temp->Next; 
			node_ptr p = Temp->Next;
			Temp->Next = p->Next;
		}
		Count -= 1; 
			delete (p); 
	}
}

//LinkedList::delete all node
void LinkedList::Deletion()
{
	while (!IsEmpty())
	{
		Delete(1);
	}
}

//LinkedList::Search
void LinkedList::Search(int Position, item& Search_Item)
{

}

//LinkedList::Display - Not Correct
void LinkedList::Display()
{

}

//LinkedList::Check Empty and if empty, return ture, not empty false
bool LinkedList::IsEmpty()
{
	return (Count == 0);
}

//LinkedList::return List's length
int LinkedList::Length()
{
	return Count;
}