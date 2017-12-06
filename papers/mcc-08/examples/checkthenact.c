//Thread A                 // Thread B

pthread_mutex_lock(L);     if(data > 0){
data++;                       /*do this*/
pthread_mutex_unlock(L);   } else {
                              /*do that*/
                           }
