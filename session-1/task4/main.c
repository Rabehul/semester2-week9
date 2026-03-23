
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "queue_structures.h"
#include "queue.h"

int main( void ) {

    // create an empty queue
    Queue *queue = createQueue();

    // test join 
    join(queue, 5);
    join(queue, 9);
    traverseI(queue->front);
    // - use traverseI() to display the nodes
    // - which pointer do you pass to traverseI(): front or back?

    // test leave 
    Node *node = leave(queue);
    freeNode(node);
    traverseI(queue->front);
    // - take care to free detached memory

    // free queue memory
    freeNodes( queue->front );
    // free queue
    free(queue);

    return 0;
}
