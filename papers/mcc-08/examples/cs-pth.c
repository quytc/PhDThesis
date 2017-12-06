int counter;
pthread_mutex_t L;

pthread_mutex_lock(L);
counter++;
pthread_mutex_unlock(L);
