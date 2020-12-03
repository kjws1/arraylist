#define ARRAYLIST_H

template <class T>
class arraylist {
   private:
    T *data;
    int arrlength;
    int listsize;
    void resize();
    bool needtoresize();

   public:
    arraylist() {
        // get an array set up
        data = new T[5];
        // initialize parameters
        arrlength = 5;
        listsize = 0;         
    }

    bool contains(T item);
    int indexof(T item);
    int lastindexof(T item);
    T get(int index);
    int size();
    ~arraylist();

    void add(T item);
    void add(int index, T item);
    void set(int index, T item);
    void remove(int idex);
    void remove(T item);
};


#include "arraylist.cpp"