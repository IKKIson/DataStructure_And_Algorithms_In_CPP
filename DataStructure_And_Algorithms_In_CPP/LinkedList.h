#pragma once

#include<stdio.h>

typedef struct
{
	int Data;
} item;
typedef struct
{
	item Data;
	node* Next;
} node;
typedef node* node_ptr;

class LinkedList
{
public:
	LinkedList();
	LinkedList(const LinkedList& L);
	~LinkedList();

	void Insert(int Position, item input_Item);
	void Delete(int Position);
	void Deletion();
	void Search(int Position, item& Search_Item);
	void Display();
	bool IsEmpty();
	int Length();
private:
	int Count;
	node_ptr Head;
};