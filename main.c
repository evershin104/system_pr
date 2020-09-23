/*
* 4. Вывести значения конфигурационных пределов, получаемых с помощью pathconf(), для корневой файловой системы.
* 5. Вывести значения всех конфигурационных пределов, получаемых с помощью sysconf().
* 6. Измените с помощью команды ulimit какой-либо из пределов. Проверьте с помощью предыдущей программы.
* ulimit -n 9000 (fe)
* Copyright (c) 2020, Vershinin Eldar <evershin@cs.karelia.ru>
*
* This code is licensed under a MIT-style license.
*/

#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void pr_sysconf(char *mesg, int name);
static void pr_pathconf(char *mesg, char *path, int name);

int main(int argc, char  *argv[])
{
    if (argc != 2) {
        printf("Использование a.out <каталог>");
        exit(1);
    }

    /* sysconf параметры */
    printf("sysconf par-s:\n");
    #ifdef ARG_MAX
        printf("ARG_MAX определен как %d\n", ARG_MAX+0);
    #else
        printf("идентификатор ARG_MAX не найден\n");
    #endif

    #ifdef _SC_ATEXIT_MAX
        pr_sysconf("ATEXIT_MAX =", _SC_ATEXIT_MAX);
    #else
        printf("идентификатор _SC_ATEXIT_MAX не найден\n");
    #endif

    #ifdef _SC_CHILD_MAX
        pr_sysconf("CHILD_MAX =", _SC_CHILD_MAX);
    #else
        printf("идентификатор _SC_CHILD_MAX не найден\n");
    #endif

    #ifdef _SC_CLK_TCK
        pr_sysconf("Количество тактов системных часов в секунду =", _SC_CLK_TCK);
    #else
        printf("идентификатор _SC_CLK_TCK не найден\n");
    #endif

    #ifdef _SC_ARG_MAX
        pr_sysconf("ARG_MAX =", _SC_ARG_MAX);
    #else
        printf("идентификатор _SC_ARG_MAX не найден\n");
    #endif

    #ifdef _SC_COLL_WEIGHTS_MAX
        pr_sysconf("COLL_WEIGHTS_MAX =", _SC_COLL_WEIGHTS_MAX);
    #else
        printf("идентификатор _SC_COLL_WEIGHTS_MAX не найден\n");
    #endif

    #ifdef _SC_DELAYTIMER_MAX
        pr_sysconf("DELAYTIMER_MAX =", _SC_DELAYTIMER_MAX);
    #else
        printf("идентификатор _SC_DELAYTIMER_MAX не найден\n");
    #endif

    #ifdef _SC_HOST_NAME_MAX
        pr_sysconf("HOST_NAME_MAX =", _SC_HOST_NAME_MAX);
    #else
        printf("идентификатор _SC_HOST_NAME_MAX не найден\n");
    #endif

    #ifdef _SC_IOV_MAX
        pr_sysconf("IOV_MAX =", _SC_IOV_MAX);
    #else
        printf("идентификатор _SC_IOV_MAX не найден\n");
    #endif

    #ifdef _SC_LOGIN_NAME_MAX
        pr_sysconf("LOGIN_NAME_MAX =", _SC_LOGIN_NAME_MAX);
    #else
        printf("идентификатор _SC_LOGIN_NAME_MAX не найден\n");
    #endif

    #ifdef _SC_NGROUPS_MAX
        pr_sysconf("NGROUPS_MAX =", _SC_NGROUPS_MAX);
    #else
        printf("идентификатор _SC_NGROUPS_MAX не найден\n");
    #endif

    #ifdef _SC_OPEN_MAX
        pr_sysconf("OPEN_MAX =", _SC_OPEN_MAX);
    #else
        printf("идентификатор _SC_OPEN_MAX не найден\n");
    #endif

    #ifdef _SC_PAGESIZE
        pr_sysconf("PAGESIZE =", _SC_PAGESIZE);
    #else
        printf("идентификатор _SC_PAGESIZE не найден\n");
    #endif

    #ifdef _SC_PAGE_SIZE
        pr_sysconf("PAGE_SIZE =", _SC_PAGE_SIZE);
    #else
        printf("идентификатор _SC_PAGE_SIZE не найден\n");
    #endif

    #ifdef _SC_RE_DUP_MAX
        pr_sysconf("RE_DUP_MAX =", _SC_RE_DUP_MAX);
    #else
        printf("идентификатор _SC_RE_DUP_MAX не найден\n");
    #endif

    #ifdef _SC_RTSIG_MAX
        pr_sysconf("RTSIG_MAX =", _SC_RTSIG_MAX);
    #else
        printf("идентификатор _SC_RTSIG_MAX не найден\n");
    #endif

    #ifdef _SC_SEM_NSEMS_MAX
        pr_sysconf("SEM_NSEMS_MAX =", _SC_SEM_NSEMS_MAX);
    #else
        printf("идентификатор _SC_SEM_NSEMS_MAX не найден\n");
    #endif

    #ifdef _SC_SEM_VALUE_MAX
        pr_sysconf("SEM_VALUE_MAX =", _SC_SEM_VALUE_MAX);
    #else
        printf("идентификатор _SC_SEM_VALUE_MAX не найден\n");
    #endif

    #ifdef _SC_SIGQUEUE_MAX
        pr_sysconf("SIGQUEUE_MAX =", _SC_SIGQUEUE_MAX);
    #else
        printf("идентификатор _SC_SIGQUEUE_MAX не найден\n");
    #endif

    #ifdef _SC_STREAM_MAX
        pr_sysconf("STREAM_MAX =", _SC_STREAM_MAX);
    #else
        printf("идентификатор _SC_STREAM_MAX не найден\n");
    #endif

    #ifdef _SC_SYMLOOP_MAX
        pr_sysconf("SYMLOOP_MAX =", _SC_SYMLOOP_MAX);
    #else
        printf("идентификатор _SC_SYMLOOP_MAX не найден\n");
    #endif

    #ifdef _SC_TIMER_MAX
        pr_sysconf("TIMER_MAX =", _SC_TIMER_MAX);
    #else
        printf("идентификатор _SC_TIMER_MAX не найден\n");
    #endif

    #ifdef _SC_TTY_NAME_MAX
        pr_sysconf("TTY_NAME_MAX =", _SC_TTY_NAME_MAX);
    #else
        printf("идентификатор _SC_TTY_NAME_MAX не найден\n");
    #endif

    #ifdef _SC_TZNAME_MAX
        pr_sysconf("TZNAME_MAX =", _SC_TZNAME_MAX);
    #else
        printf("идентификатор _SC_TZNAME_MAX не найден\n");
    #endif


        /* pathconf параметры */
        printf("pathconf par-s:\n");

    #ifdef MAX_CANON
        printf("MAX_CANON определен как %d\n", MAX_CANON+0);
    #else
        printf("идентификатор MAX_CANON не найден\n");
    #endif

    #ifdef _PC_MAX_CANON
        pr_pathconf("MAX_CANON =", argv[1], _PC_MAX_CANON);
    #else
        printf("идентификатор _PC_MAX_CANON не найден\n");
    #endif

    #ifdef _PC_FILESIZEBITS
        pr_pathconf("FILESIZEBITSN =", argv[1], _PC_FILESIZEBITS);
    #else
        printf("идентификатор _PC_FILESIZEBITS не найден\n");
    #endif

    #ifdef _PC_LINK_MAX
        pr_pathconf("LINK_MAX =", argv[1], _PC_LINK_MAX);
    #else
        printf("идентификатор _PC_LINK_MAX не найден\n");
    #endif

    #ifdef _PC_MAX_INPUT
        pr_pathconf("MAX_INPUT =", argv[1], _PC_MAX_INPUT);
    #else
        printf("идентификатор _PC_MAX_INPUT не найден\n");
    #endif

    #ifdef _PC_NAME_MAX
        pr_pathconf("NAME_MAX =", argv[1], _PC_NAME_MAX);
    #else
        printf("идентификатор _PC_NAME_MAX не найден\n");
    #endif

    #ifdef _PC_PATH_MAX
        pr_pathconf("PATH_MAX =", argv[1], _PC_PATH_MAX);
    #else
        printf("идентификатор _PC_PATH_MAX не найден\n");
    #endif

    #ifdef _PC_PIPE_BUF
        pr_pathconf("PIPE_BUF =", argv[1], _PC_PIPE_BUF);
    #else
        printf("идентификатор _PC_PIPE_BUF не найден\n");
    #endif

    #ifdef _PC_TIMESTAMP_RESOLUTION
        pr_pathconf("TIMESTAMP_RESOLUTION =", argv[1], _PC_TIMESTAMP_RESOLUTION);
    #else
        printf("идентификатор _PC_TIMESTAMP_RESOLUTION не найден\n");
    #endif

    #ifdef _PC_SYMLINK_MAX
        pr_pathconf("SYMLINK_MAX =", argv[1], _PC_SYMLINK_MAX);
    #else
        printf("идентификатор _PC_SYMLINK_MAX не найден\n");
    #endif


    printf("Необязательные параметры pathconf():\n");


    #ifdef _PC_CHOWN_RESTRICTED
        pr_pathconf("_POSIX_CHOWN_RESTRICTED =", argv[1], _PC_CHOWN_RESTRICTED);
    #else
        printf("идентификатор _PC_CHOWN_RESTRICTED не найден\n");
    #endif

    #ifdef _PC_NO_TRUNC
        pr_pathconf("_POSIX_NO_TRUNC =", argv[1], _PC_NO_TRUNC);
    #else
        printf("идентификатор _PC_NO_TRUNC не найден\n");
    #endif

    #ifdef _PC_VDISABLE
        pr_pathconf("_POSIX_VDISABLE =", argv[1], _PC_VDISABLE);
    #else
        printf("идентификатор _PC_VDISABLE не найден\n");
    #endif

    #ifdef _PC_ASYNC_IO
        pr_pathconf("_PC_ASYNC_IO =", argv[1], _PC_ASYNC_IO);
    #else
        printf("идентификатор _PC_ASYNC_IO не найден\n");
    #endif

    #ifdef _PC_PRIO_IO
        pr_pathconf("_POSIX_PRIO_IO =", argv[1], _PC_PRIO_IO);
    #else
        printf("идентификатор _PC_PRIO_IO не найден\n");
    #endif

    #ifdef _PC_SYNC_IO
        pr_pathconf("_POSIX_SYNC_IO =", argv[1], _PC_SYNC_IO);
    #else
        printf("идентификатор _PC_SYNC_IO не найден\n");
    #endif

    #ifdef _PC_2_SYMLINKS
        pr_pathconf("_POSIX2_SYMLINKS =", argv[1], _PC_2_SYMLINKS);
    #else
        printf("идентификатор _PC_2_SYMLINKS не найден\n");
    #endif


     printf("sysconf необязательные параметры:\n");

     #ifdef _SC_ASYNCHRONOUS_IO
     pr_sysconf("_POSIX_ASYNCHRONOUS_IO =", _SC_ASYNCHRONOUS_IO);
     #else
     printf("идентификатор _SC_ASYNCHRONOUS_IO не найден\n");
     #endif

     #ifdef _SC_BARRIERS
     pr_sysconf("_POSIX_BARRIERS =", _SC_BARRIERS);
     #else
     printf("идентификатор _SC_BARRIERS не найден\n");
     #endif

     #ifdef _SC_CLOCK_SELECTION
     pr_sysconf("_POSIX_CLOCK_SELECTION =", _SC_CLOCK_SELECTION);
     #else
     printf("идентификатор _SC_CLOCK_SELECTION не найден\n");
     #endif

     #ifdef _SC_JOB_CONTROL
     pr_sysconf("_POSIX_JOB_CONTROL =", _SC_JOB_CONTROL);
     #else
     printf("идентификатор _SC_JOB_CONTROL не найден\n");
     #endif

     #ifdef _SC_MAPPED_FILES
     pr_sysconf("_POSIX_MAPPED_FILES =", _SC_MAPPED_FILES);
     #else
     printf("идентификатор _SC_MAPPED_FILES не найден\n");
     #endif

     #ifdef _SC_MEMORY_PROTECTION
     pr_sysconf("_POSIX_MEMORY_PROTECTION =", _SC_MEMORY_PROTECTION);
     #else
     printf("идентификатор _SC_MEMORY_PROTECTION не найден\n");
     #endif

     #ifdef _SC_READER_WRITER_LOCKS
     pr_sysconf("_POSIX_READER_WRITER_LOCKS =", _SC_READER_WRITER_LOCKS);
     #else
     printf("идентификатор _SC_READER_WRITER_LOCKS не найден\n");
     #endif

     #ifdef _SC_REALTIME_SIGNALS
     pr_sysconf("_POSIX_REALTIME_SIGNALS =", _SC_REALTIME_SIGNALS);
     #else
     printf("идентификатор _SC_REALTIME_SIGNALS не найден\n");
     #endif

     #ifdef _SC_SAVED_IDS
     pr_sysconf("_POSIX_SAVED_IDS =", _SC_SAVED_IDS);
     #else
     printf("идентификатор _SC_SAVED_IDS не найден\n");
     #endif

     #ifdef _SC_SEMAPHORES
     pr_sysconf("_POSIX_SEMAPHORES =", _SC_SEMAPHORES);
     #else
     printf("идентификатор _SC_SEMAPHORES не найден\n");
     #endif

     #ifdef _SC_SHELL
     pr_sysconf("_POSIX_SHELL =", _SC_SHELL);
     #else
     printf("идентификатор _SC_SHELL не найден\n");
     #endif

     #ifdef _SC_SPIN_LOCKS
     pr_sysconf("_POSIX_SPIN_LOCKS =", _SC_SPIN_LOCKS);
     #else
     printf("идентификатор _SC_SPIN_LOCKS не найден\n");
     #endif

     #ifdef _SC_ATEXIT_MAX
     pr_sysconf("ATEXIT_MAX =", _SC_ATEXIT_MAX);
     #else
     printf("идентификатор _SC_ATEXIT_MAX не найден\n");
     #endif

     #ifdef _SC_THREAD_SAFE_FUNCTIONS
     pr_sysconf("_POSIX_THREAD_SAFE_FUNCTIONS =", _SC_THREAD_SAFE_FUNCTIONS);
     #else
     printf("идентификатор _SC_THREAD_SAFE_FUNCTIONS не найден\n");
     #endif

     #ifdef _SC_THREADS
     pr_sysconf("_POSIX_THREADS =", _SC_THREADS);
     #else
     printf("идентификатор _SC_THREADS не найден\n");
     #endif

     #ifdef _SC_TIMEOUTS
     pr_sysconf("_POSIX_TIMEOUTS =", _SC_TIMEOUTS);
     #else
     printf("идентификатор _SC_TIMEOUTS не найден\n");
     #endif

     #ifdef _SC_TIMERS
     pr_sysconf("_POSIX_TIMERS =", _SC_TIMERS);
     #else
     printf("идентификатор _SC_TIMERS не найден\n");
     #endif

     #ifdef _SC_VERSION
     pr_sysconf("_POSIX_VERSION =", _SC_VERSION);
     #else
     printf("идентификатор _SC_VERSION не найден\n");
     #endif

     #ifdef _SC_XOPEN_CRYPT
     pr_sysconf("_XOPEN_CRYPT =", _SC_XOPEN_CRYPT);
     #else
     printf("идентификатор _SC_XOPEN_CRYPT не найден\n");
     #endif

     #ifdef _SC_XOPEN_REALTIME
     pr_sysconf("_XOPEN_REALTIME =", _SC_XOPEN_REALTIME);
     #else
     printf("идентификатор _SC_XOPEN_REALTIME не найден\n");
     #endif

     #ifdef _SC_XOPEN_REALTIME_THREADS
     pr_sysconf("_XOPEN_REALTIME_THREADS =", _SC_XOPEN_REALTIME_THREADS);
     #else
     printf("идентификатор _SC_XOPEN_REALTIME_THREADS не найден\n");
     #endif

     #ifdef _SC_XOPEN_SHM
     pr_sysconf("_XOPEN_SHM =", _SC_XOPEN_SHM);
     #else
     printf("идентификатор _SC_XOPEN_SHM не найден\n");
     #endif

     #ifdef _SC_XOPEN_VERSION
     pr_sysconf("_XOPEN_VERSION =", _SC_XOPEN_VERSION);
     #else
     printf("идентификатор _SC_XOPEN_VERSION не найден\n");
     #endif

    return 1;

}


static void pr_sysconf(char *mesg, int name)
{
    long value;
    fputs(mesg, stdout);
    errno = 0;
    if ((value = sysconf(name)) < 0) {
        if (errno != 0) {
            if (errno == EINVAL)
                fputs(" (не поддерживается)\n", stdout);
            else {
                printf("ошибка вызова sysconf");
//                exit(-1);
            }
        }
        else {
            fputs(" (нет ограничений)\n", stdout);
        }
    }
    else {
        printf(" %ld\n", value);
    }
}

static void pr_pathconf(char *mesg, char *path, int name)
{
    long value;
    fputs(mesg, stdout);
    errno = 0;
    if ((value = pathconf(path, name)) < 0) {
        if (errno != 0) {
            if (errno == EINVAL)
                fputs(" (не поддерживается)\n", stdout);
            else {
                printf("ошибка вызова pathconf, path = %s", path);
//                exit(-1);
            }
        } else {
            fputs(" (нет ограничений)\n", stdout);
        }
    } else {
        printf(" %ld\n", value);
    }
}

