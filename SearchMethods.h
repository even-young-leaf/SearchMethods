#ifndef SEARCHMETHODS_H
#define SEARCHMETHODS_H

#endif //SEARCHMETHODS_H

typedef int KeyType;

typedef struct ElemType {
     KeyType key;
}ElemType;

//顺序查找
int SequentialSearch(ElemType A[],int n,KeyType key);

//二分查找
int BinarySearch(ElemType A[],int n,KeyType key);