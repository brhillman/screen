/* Copyright (c) 1991
 *      Juergen Weigert (jnweiger@immd4.informatik.uni-erlangen.de)
 *      Michael Schroeder (mlschroe@immd4.informatik.uni-erlangen.de)
 ****************************************************************
 * $Id$ FAU
 */
#undef POSIX
#define BSDJOBS
#undef TERMIO
#undef TERMINFO
#undef SYSV
#undef SIGVOID 
#undef DIRENT
#define SUIDROOT
#define UTMPOK
#define LOGINDEFAULT	1
#undef GETUTENT
#define UTHOST
#undef USRLIMIT
#undef LOCKPTY
#undef NOREUID
#undef LOADAV_3DOUBLES
#undef LOADAV_3LONGS
#undef LOADAV_4LONGS
#define LOADAV_NEXT
#define GETTTYENT
#undef NFS_HACK
#define LOCALSOCKDIR

#ifdef LOCALSOCKDIR
# ifndef TMPTEST
#  define SOCKDIR "/local/screens"
# else
#  define SOCKDIR "/tmp/screens"
# endif
#endif
#define USEBCOPY
#undef TOPSTAT
#define USEVARARGS
#undef NAMEDPIPE
#define LOCK
#define PASSWORD
#define COPY_PASTE
#define REMOTE_DETACH
#define POW_DETACH
#define NETHACK
#define ETCSCREENRC "/usr/local/etc/screenrc"
