static inline void* armGetTls(void) {
    void* ret;
    __asm__ ("mrs %x[data], tpidrro_el0" : [data] "=r" (ret));
    return ret;
}

void osDCacheFlush(void* addr, size_t size);
