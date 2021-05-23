/* Copyright (C) 1991-2021 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <assert.h>
#include <unistd.h>
#include <sys/param.h>

#include <ldsodefs.h>

/* Return the system page size.  */
int
__getpagesize (void)
{
  assert (GLRO(dl_pagesize) != 0);
  return GLRO(dl_pagesize);
}
libc_hidden_def (__getpagesize)
weak_alias (__getpagesize, getpagesize)
