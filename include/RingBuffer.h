#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#define BUFFER_SIZE 10

typedef struct {
    int buffer[BUFFER_SIZE];
    int head;
    int tail;
    int count;
} RingBuffer;

/* Ring buffer API */
RingBuffer* create_ring_buffer(void);
void enqueue(RingBuffer* rb, int value);
int dequeue(RingBuffer* rb);
void free_ring_buffer(RingBuffer* rb);

#endif // RINGBUFFER_H