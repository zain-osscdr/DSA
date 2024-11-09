#ifndef ARRAY_H
#define ARRAY_H


class Array
{
public:
    Array();
    Array(int* newArr, int newSize, int newCpacity);
    ~Array();
    void insertAtTail(int val);
    void insertAtHead(int val);
    void removeElement(int key);
    void updateElement(int existingElement, int updatedElement);
    void linearSearchElement(int key);
    void moveBack(int &currIndex);
    void moveForward(int& currIndex);
    void indexAt(int &index);
    void selectionSortAscending();
    void selectionSortDescending();
    void bubbleSortingAscending();
    void bubbleSortingDescending();
    void insertionSortAscending();
    void insertionSortDescending();
    void binarySearch(int key);
    void Print();


private:
    int capacity;
    int limit;
    int* arr;
};

#endif // ARRAY_H
