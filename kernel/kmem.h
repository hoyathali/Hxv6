struct run {
    struct run *next;
};

struct kmem {
  struct spinlock lock;
  struct run *freelist;
};

extern struct kmem kmem;