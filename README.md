=========================================
  PSTE-shazam - reconnaissance musicale
=========================================


=== What is this repo for ===

This is a student project (ECE Paris), for the year 2013-2014. I am aprt of a 6 students group
I choose to use the C programming langage, because I am too lazy to learn a new programming langage



=== Short present of the code ===

- Make_hash : Prog to load a .wav (mp3 not suported yet), perform a Fourier Transform and save the highest
  frequencies to a file.
- Match : Prog to compare hash files mades with the above prog, and output a sumary of the number of matchs
  found for each file



=== What has been used ===

- a post from redcode, very usefull, altough it used java http://www.redcode.nl/blog/2010/06/creating-shazam-in-java/
- Fmod ex : not really working
- SDL for all graphic rendering http://www.libsdl.org/
- fftw for Fourier transforms http://www.fftw.org/


=== History ===

- sept - oct : googling ... found this a post on redcode about a shazam coded with java
- nov : start coding : tryed the Fourier Transform with Fmod ex and a graphic render for spectrogram with SDL
  Not really working, moreover spectrogram are funny bur useless 
- dec : found the fftw lib, the paramount for Fourier transform. It own a large amount of FFT functions,
  I tryed one randomly, looks good for a beginning - need some adjustements but nice results
