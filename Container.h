#pragma once
#include <iostream>
using namespace std;

template <class T>
T getMaximum(T first, T second) {
    return (first > second) ? first : second;
}

template <class T>
class Container {
    private:
        int size;
        int capacity = 1;
        T* arr = new T[capacity];
    public:
        Container();
        void AddItem(T item);
        void displayItems();
        bool removeItems(int index);
        int getSize();
        ~Container();

};

template <class T>
Container<T>::Container(){
    size = 0;
    capacity =0;
}

template <class T>
void Container<T>::AddItem(T item) {
    if(size==capacity){
        capacity+=2;
        T* tmparr =new T[capacity];

        for (int i=0;i<size;i++){
            tmparr[i]=arr[i];
        }
        delete[] arr;
        arr = tmparr;
    }
    arr[size]=item;
    size++;
}

template <class T>
void Container<T>::displayItems(){
    for (int i=0;i<size;i++)
         cout << arr[i] <<endl;
}

template <class T>
bool Container<T>::removeItems(int index){
    cout<< boolalpha;
    if (index>=size || size == 0 || index<0) return false;

    int j=0;
    for (int i=0;i<size;i++){
        if(i==index && index!=(size-1)) continue;
        else if (index==(size-1)) break;

        arr[j]=arr[i];
        j++;
    }
    size--;

    return true;
}

template <class T>
int Container<T>::getSize(){
    return size;
}

template <class T>
Container<T>::~Container(){
    delete[] arr;
}
