AC_INIT([main], [1.0], [dasha.kondratez@gmail.com])
AM_INIT_AUTOMAKE([foreign])
AC_PROG_CXX
AC_CHECK_LIB([gtest], [main])

# Перевірка наявності бібліотеки Google Test
AC_CHECK_LIB([gtest], [main], [], [AC_MSG_ERROR([Google Test library not found])])

# Налаштування для тестів
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

