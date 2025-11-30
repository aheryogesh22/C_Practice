#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RingBuffer.h"

RingBuffer* create_ring_buffer() {
    RingBuffer* rb = (RingBuffer*)malloc(sizeof(RingBuffer));
    rb->head = 0;
    rb->tail = 0;
    rb->count = 0;
    return rb;
}

void enqueue(RingBuffer* rb, int value) {
    if (rb->count == BUFFER_SIZE) {
        printf("Buffer is full\n");
        return;
    }
    rb->buffer[rb->tail] = value;
    rb->tail = (rb->tail + 1) % BUFFER_SIZE;
    rb->count++;
}

int dequeue(RingBuffer* rb) {
    if (rb->count == 0) {
        printf("Buffer is empty\n");
        return -1;
    }
    int value = rb->buffer[rb->head];
    rb->head = (rb->head + 1) % BUFFER_SIZE;
    rb->count--;
    return value;
}

void free_ring_buffer(RingBuffer* rb) {
    free(rb);
}