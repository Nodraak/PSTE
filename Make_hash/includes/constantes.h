#ifndef CONSTANTES_H
#define CONSTANTES_H

/*=== INCLUDE ===*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> /* for uint64_t */

#include <SDL2/SDL.h>
#include "fftw3.h"

/*=== DEFINE ===*/

/*
notes for the defines :
    CHUNK_SIZE
        chunk size of the fft
        size of y dimension of fft.out, but real usefull size is n/2+1
        better perf. if power of 2
    OFFSET_SIZE
        size of the offset when perfoming windowed fft, in Bytes
    NB_MAX_INTENSITY
        number of selected max intensities for hash number
        shazam uses 3, redcode says 3 or 4
    ENCODE_NB
        selector for the hash number, so that max intensities do not overlap
*/

#define SAMPLING_FREQ       44100   /* en francais : frequence d'echantillonage */
#define WINDOW              0.050   /* analyse window length in sec */
#define STEP                0.025   /* step for the analyse in sec */
#define CHUNK_SIZE          (SAMPLING_FREQ*WINDOW)
#define OFFSET_SIZE         (SAMPLING_FREQ*STEP)
#define NB_MAX_INTENSITY    3
#define ENCODE_NB           10000

/*
#define TIME_DIV        (1.0/100000)    // force double type
*/

//=== STRUCT ===

typedef struct      s_wav
{
    SDL_AudioSpec   spec;
    uint32_t        len;    /* t_wav->buf size in Bytes */
    uint8_t         *buf;   /* music data */
}                   t_wav;

typedef struct      s_fft
{
    fftw_complex    **out;  /* the spectrogram computed by fftw */
    uint32_t        lenB;   /* Byte - size in of the out tab (time unit) */
    double          lenT;   /* Time - music size in sec */
}                   t_fft;

typedef struct      s_max
{
    uint64_t        hash;
    double          time;   /* time of the hash, in sec */
    double          intensity;
}                   t_max;

#endif /* CONSTANTES_H */
