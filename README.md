# Linked List Queue Implementation

This project contains a C++ template-based linked list queue implementation. The queue follows the First-In-First-Out (FIFO) principle and uses a linked list data structure to manage elements.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)
- [Installation](#installation)
- [Example](#example)
- [Contributing](#contributing)

## Overview

This linked list queue implementation provides a versatile and memory-efficient way to manage a queue of elements. It includes various methods for enqueuing, dequeuing, checking if the queue is empty, and accessing the front and back elements.

## Features

- Enqueue and dequeue elements efficiently.
- Check if the queue is empty.
- Access the front and back elements.
- Proper memory management using linked list nodes.
- Exception handling for edge cases.
- Move semantics for efficient resource management.
- Template-based to support various data types.

## Usage

1. Include the `Queue.h` header in your project.
2. Instantiate a `Queue` object with the desired data type: `Queue<int> intQueue;`
3. Use the various methods to enqueue, dequeue, check if the queue is empty, and access elements.

## Installation

1. Clone the repository: `git clone https://github.com/yourusername/linked-list-queue.git`
2. Include the `Queue.h` header in your project.

## Example

```cpp
#include <iostream>
#include "Queue.h"

int main() {
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    std::cout << "Front: " << intQueue.front() << std::endl;
    std::cout << "Back: " << intQueue.back() << std::endl;

    intQueue.dequeue();
    std::cout << "Front after dequeue: " << intQueue.front() << std::endl;

    return 0;
}
```

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.
