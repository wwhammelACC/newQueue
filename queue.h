/*
 * William Hammel
 * Practice Queue
 */

#ifndef QUEUE_H
#define QUEUE_H

/*
 * there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */

//#include "data.h"
#define DEFAULT 2
#include <iostream>   /* cout, endl */
using std::cout;
using std::endl;

// From data.h
#include <string>
using std::string;
struct Data {
    int id;
    string information;
};


//From functions.h
#define MAXSTRSIZE 8
#include <stdlib.h>   /* srand, rand */
#include <time.h>     /* time */
#include <time.h>     /* time */
void rand_string(std::string*);
bool is_positive_integer(char*);


class Queue {

public:

    /* 
     * write all your public method prototypes here
     * this includes you constructor and destructor
     */
    //constructor
    Queue(int);
    //destructor
    ~Queue();

// from stack.cpp
//    bool push(int, string*);
//    bool peek(Data*);
//    bool pop(Data*);
//    bool isEmpty();

    bool enqueue(int, string*); //push
    bool dequeue(Data*); //pop
    bool peek(Data*);
    bool isEmpty();
    bool isFull();
    int getCount();
    
private:

    /* 
     * write all your private method prototypes here
     */

    // these are the only attributes you need.
    // do not modify them or add any other attributes
    int count;
    int back;
    int front;
    int top;
    int size;
    Data **queue;
};

#endif //QUEUE_H
