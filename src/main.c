#include <stdio.h>
#include "RingBuffer.h"

int main() 
{
    RingBuffer* rb = create_ring_buffer();
    
    enqueue(rb, 10);
    enqueue(rb, 20);
    enqueue(rb, 30);
    
    printf("%d\n", dequeue(rb));
    printf("%d\n", dequeue(rb));
    
    free_ring_buffer(rb);
    return 0;
}

