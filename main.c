/*
* 2nd_program.c
* 1. Вывести значения всех пределов ISO C в Вашей системе.
* 2. Вывести значения всех пределов POSIX в Вашей системе.
* Copyright (c) 2020, Vershinin Eldar <evershin@cs.karelia.ru>
*
* This code is licensed under a MIT-style license.
*/

#include <stdio.h>
#include <limits.h>
#define LONG_MAX  __LONG_MAX__

int main(int argc, char *argv[]) {

    printf("----ISO----\n");
    /* ISO C Limits */
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("CHAR_MAX = %d\n", CHAR_MAX);
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("UCHAR_MAX = %d\n", UCHAR_MAX);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("UINT_MAX = %d\n", UINT_MAX);
    printf("SHRT_MAX = %d\n", SHRT_MAX);
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("USHRT_MAX = %d\n", USHRT_MAX);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("ULONG_MAX = %lu\n", ULONG_MAX);
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
    /* Сверху минимальные и максимальные 
     * значения разных типов переменных */
    printf("MB_LEN_MAX = %d\n", MB_LEN_MAX);
    printf("FOPEN_MAX = %d\n", FOPEN_MAX);
    printf("TMP_MAX = %d\n", TMP_MAX); // Максимальное количество уникальных имен файла, 
    // которые могут быть сгенерирова- ны функцией tmpnam.
    printf("FILENAME_MAX = %d\n", FILENAME_MAX);
    printf("NAME_MAX = %d\n", NAME_MAX);
    printf("PATH_MAX = %d\n", PATH_MAX);


    printf("----POSIX----\n");
    /* POSIX Limits */
    printf("_POSIX_ARG_MAX = %d\n", _POSIX_ARG_MAX); // Длины аргументов функций exec
    printf("_POSIX_CHILD_MAX = %d\n", _POSIX_CHILD_MAX); // Количества дочерних процессов на реальный идентификатор пользователя
    printf("_POSIX_DELAYTIMER_MAX = %d\n", _POSIX_DELAYTIMER_MAX); // Количества переполнений каждого таймера
    printf("_POSIX_HOST_NAME_MAX = %d\n", _POSIX_HOST_NAME_MAX); // Длины имени сетевого узла, возвращаемого функцией gethostname
    printf("_POSIX_LINK_MAX = %d\n", _POSIX_LINK_MAX); // Количества ссылок на один файл
    printf("_POSIX_LOGIN_NAME_MAX = %d\n", _POSIX_LOGIN_NAME_MAX); // Длины имени пользователя
    printf("_POSIX_MAX_CANON = %d\n", _POSIX_MAX_CANON); // Количества байтов в канонической входной очереди терминала
    printf("_POSIX_MAX_INPUT = %d\n", _POSIX_MAX_INPUT); // Количества байтов, доступных во входной очереди терминала
    printf("_POSIX_NAME_MAX = %d\n", _POSIX_NAME_MAX); // Количества байтов в имени файла, за исключением завершающего нулевого символа
    printf("_POSIX_NGROUPS_MAX = %d\n", _POSIX_NGROUPS_MAX); // Количества идентификаторов дополнительных групп на процесс
    printf("_POSIX_OPEN_MAX = %d\n", _POSIX_OPEN_MAX); // Количества открытых файлов на процесс
    printf("_POSIX_PATH_MAX = %d\n", _POSIX_PATH_MAX); // Длины строки пути к файлу, включая завершающий нулевой символ
    printf("_POSIX_PIPE_BUF = %d\n", _POSIX_PIPE_BUF); // Количества байтов, которые можно атомарно записать в канал
    printf("_POSIX_RE_DUP_MAX = %d\n", _POSIX_RE_DUP_MAX); // Количества повторяющихся вхождений для основного регулярного выражения, 
    // принимаемого функциями regexec и regcomp, при использовании интервальной нотации \{m, n\}
    printf("_POSIX_RTSIG_MAX = %d\n", _POSIX_RTSIG_MAX); // Количества сигналов реального времени, зарезервированных для приложения
    printf("_POSIX_SEM_NSEMS_MAX = %d\n", _POSIX_SEM_NSEMS_MAX); // Количества семафоров, одновременно используемых процессом
    printf("_POSIX_SEM_VALUE_MAX = %d\n", _POSIX_SEM_VALUE_MAX); // Значения, которые может хранить семафор
    printf("_POSIX_SIGQUEUE_MAX = %d\n", _POSIX_SIGQUEUE_MAX); // Количества сигналов, которые процесс может 
    // поставить в очередь ожидания обработки
    printf("_POSIX_SSIZE_MAX = %d\n", _POSIX_SSIZE_MAX); // Значения, которые можно сохранить в переменной типа ssize_t
    printf("_POSIX_STREAM_MAX = %d\n", _POSIX_STREAM_MAX); // Количества стандартных потоков ввода/вывода на процесс
    printf("_POSIX_SYMLINK_MAX = %d\n", _POSIX_SYMLINK_MAX); // Количества байтов в символической ссылке
    printf("_POSIX_SYMLOOP_MAX = %d\n", _POSIX_SYMLOOP_MAX); // Количества переходов по символическим ссылкам, 
    // допустимого в строке пути
    printf("_POSIX_TIMER_MAX = %d\n", _POSIX_TIMER_MAX); // Количества таймеров в процессе
    printf("_POSIX_TTY_NAME_MAX = %d\n", _POSIX_TTY_NAME_MAX); // Длины имени терминального устройства, 
    // включая завершающий нулевой символ
    printf("_POSIX_TZNAME_MAX = %d\n", _POSIX_TZNAME_MAX); // Количества байтов в имени временной зоны
    printf("LONG_BIT = %d\n", LONG_BIT);
    printf("SSIZE_MAX = %ld\n", SSIZE_MAX);
    printf("WORD_BIT = %d\n", WORD_BIT);
    printf("_CHARCLASS_NAME_MAX = %d\n", CHARCLASS_NAME_MAX);
    printf("COLL_WEIGHTS_MAX = %d\n", COLL_WEIGHTS_MAX);
    printf("LINE_MAX = %d\n", LINE_MAX);
    printf("NGROUPS_MAX = %d\n", NGROUPS_MAX);
    printf("RE_DUP_MAX = %d\n", RE_DUP_MAX);

    return 1;
}