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

