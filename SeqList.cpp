#include"SeqList.h"

void InitList(SeqList& L) {
	L.elem = new ElemType[ListSize];
	if (L.elem == NULL)
	{
		printf("error!");
		exit(-1);
	}
	L.length = 0;
	L.maxSize = ListSize;

}

void Free(SeqList& L) {

	if (L.elem) {
		delete[] L.elem;
		L.elem = NULL;

	}
	L.length = L.maxSize = 0;

}

void print(SeqList& L) {
	printf("顺序表内容：");
	for (int i = 0; i < L.length; i++) {
		printf("%c ", L.elem[i]);
	}
	printf("\n长度：%d，容量：%d\n", L.length, L.maxSize);
}


int Find(SeqList& L, ElemType x) {
	int i = 0;
	while (i < L.length && L.elem[i] != x)
		i++;
	if (i < L.length)return i;
	else return -1;
}



bool insertSeqList(SeqList& L, ElemType x, int i)
{
	if (i < 0 || i > L.length) return false;
	if (L.length == L.maxSize)return false;
	for (int j = L.length - 1; j >= i; j--) {
		L.elem[j + 1] = L.elem[j];
	}
		L.elem[i] = x;
		L.length++;
		return true;
}


bool  Delete(SeqList& L, int i, ElemType &x)
{

	if (i >= 0 && i < L.length) {
		x = L.elem[i];
		for (int j = i; j < L.length - 1; j++)
			L.elem[j] = L.elem[j + 1];
		L.length--;
		return true;
	}

	return false;

}

void reverse(SeqList& L) {
	for (int i = 0; i < L.length / 2; i++) {
		ElemType tmp = L.elem[i];
		L.elem[i] = L.elem[L.length - 1 - i];
		L.elem[L.length - 1 - i] = tmp;
	}
}



