/*
What is a Thread?

A thread is the smallest unit of execution inside a process.

A process can contain one or more threads.

For example, imagine a browser:

Browser Process
       |
       +---- Thread 1 → User interface
       |
       +---- Thread 2 → Network operations
       |
       +---- Thread 3 → Page processing
       |
       +---- Thread 4 → Background work

A thread is an independent sequence of instructions executing within a process.
*/

/*
Process vs Thread

Before teaching threads, students should understand the difference between a process and a thread.

Process

A process is a running program.

Thread

A thread is an execution path inside that process.
*/

/*
Why Do We Need Threads?

Suppose we have a program that needs to perform three tasks:

Task 1 → Download file
Task 2 → Process data
Task 3 → Display result

With a simple sequential program:

Task 1
  ↓
Task 2
  ↓
Task 3

Task 2 waits until Task 1 finishes.

With multiple threads:

             Program
                |
       +--------+--------+
       |        |        |
    Thread 1 Thread 2 Thread 3
       |        |        |
   Download   Process   Display

The operating system can schedule these threads so their work can overlap.

On a multicore CPU, different threads may actually execute simultaneously on different CPU cores.

*/

/*
Concurrency vs Parallelism

These terms are important.

Concurrency

Multiple tasks are in progress during the same period, with execution potentially interleaved.

Time →
Thread 1: ███     ███
Thread 2:    ███     ███


Parallelism

Multiple tasks actually execute at the same time, typically on different CPU cores.

Core 1 → Thread 1 █████████
Core 2 → Thread 2 █████████

Therefore:

Concurrency is about dealing with multiple tasks. Parallelism is about executing multiple tasks simultaneously.
*/

/*
Creating a Thread

The most important function is:

pthread_create()

Syntax

pthread_create(&thread, NULL, function, argument);

*/

int pthread_create(
    pthread_t *thread,          
    const pthread_attr_t *attr, //  
    void *(*start_routine)(void *),
    void *arg
);
/*
Understanding pthread_create()

&thread
   ↓
Where should the thread ID be stored?

NULL
   ↓
Use default thread attributes

task
   ↓
Function that the new thread executes

NULL
   ↓
No argument passed to task()
*/
#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("Hello from thread\n");
    return NULL;
}

int main()
{
    pthread_t thread; // This variable stores the identifier/handle representing the thread. 

    pthread_create(&thread, NULL, task, NULL); // The main thread may continue executing.

    pthread_join(thread, NULL); // If we want the main thread to wait for the created thread to finish, we use: pthread_join(thread, NULL);

    printf("Main thread finished\n");

    return 0;
}
 
/* pthread_join() */
#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("Thread is running\n");
    return NULL;
}

int main()
{
    pthread_t thread;

    pthread_create(&thread, NULL, task, NULL);

    printf("Main is waiting...\n");

    pthread_join(thread, NULL);

    printf("Thread finished\n");

    return 0;
}
/* Passing an Integer */
#include <stdio.h>
#include <pthread.h>

void *task(void *arg)   
{
    //if it is (int *)arg means: Treat this address as a pointer to int
    int value = *(int *)arg;    // *(int *)arg means Go to that address and retrieve the integer stored there.

    printf("Value = %d\n", value);

    return NULL;
}

int main()
{
    pthread_t thread;

    int value = 10;

    pthread_create(&thread, NULL, task, &value);

    pthread_join(thread, NULL);

    return 0;
}

/* Returning a Value from a Thread 
A thread function returns:

void *

The returned pointer can be collected using:

pthread_join(thread, &result);
*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *calculate(void *arg)
{
    int *result = malloc(sizeof(int));

    *result = 10 + 20;

    return result;
}

int main()
{
    pthread_t thread;

    void *result;

    pthread_create(&thread, NULL, calculate, NULL);

    pthread_join(thread, &result);

    printf("Result = %d\n", *(int *)result);

    free(result);

    return 0;
}


/* Common Thread Functions
| Function                   | Purpose                        |
| -------------------------- | ------------------------------ |
| `pthread_create()`         | Creates a new thread           |
| `pthread_join()`           | Waits for a thread to finish   |
| `pthread_exit()`           | Terminates calling thread      |
| `pthread_self()`           | Gets calling thread's ID       |
| `pthread_equal()`          | Compares two thread IDs        |
| `pthread_detach()`         | Marks thread as detached       |
| `pthread_mutex_init()`     | Initializes mutex              |
| `pthread_mutex_lock()`     | Locks mutex                    |
| `pthread_mutex_unlock()`   | Unlocks mutex                  |
| `pthread_mutex_destroy()`  | Destroys mutex                 |
| `pthread_cond_init()`      | Initializes condition variable |
| `pthread_cond_wait()`      | Waits for condition            |
| `pthread_cond_signal()`    | Wakes a waiting thread         |
| `pthread_cond_broadcast()` | Wakes all waiting threads      |
| `pthread_cond_destroy()`   | Destroys condition variable    |

*/

/*

2. What is Thread Synchronization?
Imagine two students are working on the same bank account.

The account balance is ₹1,000.
- Thread 1 wants to withdraw ₹500.
- Thread 2 wants to withdraw ₹700.
Both threads read the balance at almost the same time.

Both see ₹1,000.

They independently calculate the new balance:
Thread 1: 1000 - 500 = 500

Thread 2: 1000 - 700 = 300

Depending on how they update the shared balance, one update may overwrite the other.

This is called a race condition.

What is a race condition?
A race condition occurs when multiple threads access shared data concurrently and the final result depends on the order or timing of their operations.

What is thread synchronization?
Thread synchronization is the process of coordinating multiple threads so that they access shared resources safely and in the correct order.

In simple language:
Synchronization means controlling threads so that they do not interfere with each other while working on shared data.


3. What is a Critical Section?
A critical section is the part of a program where a thread accesses or modifies shared resources.

For example:
balance = balance - 500;

If multiple threads modify balance simultaneously, incorrect results may occur.

Therefore, we need to protect this section.

Thread 1 --------+
                 |
                 v
          Critical Section
          (Shared Balance)
                 ^
                 |
Thread 2 --------+

Only one thread should execute the protected critical section at a time when modifying the shared balance.

This is where a mutex is useful.

4. What is a Mutex in C?
Mutex stands for Mutual Exclusion.

A mutex is a synchronization mechanism that ensures only one thread at a time can enter a protected critical section.

Think of a mutex like a washroom key.
- If one person has the key, nobody else can enter.
- When that person leaves, they return the key.
- The next person can then enter.
Similarly:
- A thread locks the mutex before accessing shared data.
- Other threads attempting to lock it must wait.
- The thread unlocks the mutex after completing its work.

How does a mutex work?
           Thread 1
               |
               v
          Lock Mutex
               |
               v
        Critical Section
        (Modify balance)
               |
               v
         Unlock Mutex
               |
               v
          Thread 2
          can proceed
*/

/*
    Function	                 Purpose
pthread_mutex_init()	    Initializes a mutex
pthread_mutex_lock()	    Locks a mutex
pthread_mutex_unlock()	    Unlocks a mutex
pthread_mutex_destroy()	    Destroys a mutex

*/

/*
Example: Using a mutex
Let's create two threads that increment a shared counter.

Without synchronization, both threads may interfere with each other.

With a mutex, only one thread can update the counter at a time.

#include <stdio.h>
#include <pthread.h>

int counter = 0;

pthread_mutex_t lock;

void* increment(void* arg)
{
    for(int i = 0; i < 100000; i++)
    {
        pthread_mutex_lock(&lock);

        counter++;

        pthread_mutex_unlock(&lock);
    }

    return NULL;
}

int main()
{
    pthread_t t1, t2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, increment, NULL);
    pthread_create(&t2, NULL, increment, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Final Counter = %d\n", counter);

    pthread_mutex_destroy(&lock);

    return 0;
}



Expected output:
Final Counter = 200000
*/

/*

What is a Condition Variable in C?
Now let's understand the third concept.

A mutex helps us control access to shared data.

But sometimes we need something different:

We need one thread to wait until a particular condition becomes true.

Consider a real-life example.

A teacher asks students to submit their assignments.
- Students are waiting for the assignment question paper.
- The teacher has not uploaded it yet.
- Students should wait.
- Once the teacher uploads it, students can start working.
Here, students should not continuously check whether the assignment is available.

Instead, they should wait until they receive a notification.

This is the purpose of a condition variable.
Definition
A condition variable is a synchronization mechanism that allows one or more threads to sleep until another thread signals that a particular condition may have changed.

In simple language:
A condition variable allows a thread to wait for something to happen instead of continuously checking for it.

Example
Imagine two threads:
Thread 1: Consumer
Thread 2: Producer

- Consumer wants to read data.
- Producer generates data.
- If data is not available, the consumer waits.
- When the producer generates data, it notifies the consumer.
             Producer
                |
                v
           Generate Data
                |
                v
        Signal Condition Variable
                |
                v
          Consumer Wakes Up
                |
                v
             Read Data

This is a classic producer-consumer problem.
6. Important Condition Variable Functions
Condition variables are also provided by Pthreads.
Function	Purpose
pthread_cond_init()	Initializes a condition variable
pthread_cond_wait()	Makes a thread wait for a condition
pthread_cond_signal()	Wakes up at least one waiting thread
pthread_cond_broadcast()	Wakes up all waiting threads
pthread_cond_destroy()	Destroys a condition variable


Declaration:
pthread_cond_t condition;

Initialization:
pthread_cond_init(&condition, NULL);

The most important function: pthread_cond_wait()
pthread_cond_wait(&condition, &mutex);

This function performs three important actions:
1. Releases the mutex.
2. Puts the thread into a waiting state.
3. When awakened, reacquires the mutex before returning.
This is extremely important.

The mutex is released while the thread waits so another thread can access the shared data and make the required condition true.
pthread_cond_signal()
pthread_cond_signal(&condition);

This notifies one waiting thread that the condition may now be true.
pthread_cond_broadcast()
pthread_cond_broadcast(&condition);

This notifies all threads waiting on that condition variable.

Important: A notification does not guarantee that the condition is true when the waiting thread resumes. Therefore, always check the condition again.
*/
/*

#include <stdio.h>
#include <pthread.h>

int data = 0;
int available = 0;

pthread_mutex_t mutex;
pthread_cond_t condition;

void* producer(void* arg)
{
    pthread_mutex_lock(&mutex);

    data = 100;
    available = 1;

    printf("Producer: Data produced = %d\n", data);

    pthread_cond_signal(&condition);

    pthread_mutex_unlock(&mutex);

    return NULL;
}

void* consumer(void* arg)
{
    pthread_mutex_lock(&mutex);

    while(available == 0)
    {
        printf("Consumer: Waiting for data...\n");

        pthread_cond_wait(&condition, &mutex);
    }

    printf("Consumer: Data consumed = %d\n", data);

    available = 0;

    pthread_mutex_unlock(&mutex);

    return NULL;
}

int main()
{
    pthread_t p, c;

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&condition, NULL);

    pthread_create(&c, NULL, consumer, NULL);
    pthread_create(&p, NULL, producer, NULL);

    pthread_join(p, NULL);
    pthread_join(c, NULL);

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&condition);

    return 0;
}

Consumer: Waiting for data...
Producer: Data produced = 100
Consumer: Data consumed = 100
*/

/*
Difference Between Mutex and Condition Variable
This is one of the most important examination questions.
    Mutex	                                                Condition Variable
Provides mutual exclusion	                    Allows threads to wait for a condition
Protects shared resources	                    Coordinates execution between threads
Uses lock and unlock	                        Uses wait, signal and broadcast
Only one thread owns a mutex at a time	        Multiple threads can wait on a condition variable
Example: Protecting a bank balance	            Example: Waiting until data is available

*/

