/*
 * Copyright (c) 2016 The Chromium Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef libsrtp_config_h
#define libsrtp_config_h

#ifdef __APPLE__
#include <TargetConditionals.h>

#if TARGET_RT_BIG_ENDIAN && !defined(WORDS_BIGENDIAN)
#define WORDS_BIGENDIAN
#endif

#endif

#define HAVE_CONFIG_H
#define OPENSSL
#define GCM
#define HAVE_STDLIB_H
#define HAVE_STRING_H
#define HAVE_STDINT_H
#define HAVE_INTTYPES_H
#define HAVE_INT16_T
#define HAVE_INT32_T
#define HAVE_INT8_T
#define HAVE_UINT16_T
#define HAVE_UINT32_T
#define HAVE_UINT64_T
#define HAVE_UINT8_T
#define HAVE_ARPA_INET_H
#define HAVE_NETINET_IN_H
#define HAVE_SYS_TYPES_H
#define HAVE_UNISTD_H
#define PACKAGE_STRING "860492290f7d1f25e2bd45da6471bfd4cd4d7add"
#define PACKAGE_VERSION "860492290f7d1f25e2bd45da6471bfd4cd4d7add"

#endif /* libsrtp_config_h */
