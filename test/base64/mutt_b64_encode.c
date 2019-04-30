/**
 * @file
 * Test code for mutt_b64_encode()
 *
 * @authors
 * Copyright (C) 2019 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TEST_NO_MAIN
#include "acutest.h"
#include "config.h"
#include "mutt/mutt.h"

void test_mutt_b64_encode(void)
{
  // size_t mutt_b64_encode(const char *in, size_t inlen, char *out, size_t outlen);

  {
    char buf[32] = { 0 };
    TEST_CHECK(mutt_b64_encode(NULL, 5, buf, sizeof(buf)) == 0);
  }

  {
    TEST_CHECK(mutt_b64_encode("apple", 5, NULL, 10) == 0);
  }
}