#include "lockutil.h"
#include <SDL2/SDL_mutex.h>
#include <stdlib.h>
#include "log.h"

void mutex_lock(SDL_mutex *mutex)
{
    if(SDL_LockMutex(mutex))
    {
        LOGC("Counld not lock mutex");
        abort();
    }
}

void mutex_unlock(SDL_mutex *mutex)
{
    if(SDL_UnlockMutex(mutex))
    {
        LOGC("Counld not unlock mutex");
        abort();
    }
}

void cond_wait(SDL_cond *cond, SDL_mutex *mutex)
{
    if(SDL_CondWait(cond,mutex))
    {
        LOGC("Could not wait on condiation");
        abort();
    }
}

void cond_signal(SDL_cond *cond)
{
    if(SDL_CondSignal(cond))
    {
        LOGC("Could not signal a condition");
        abort();
    }
}
