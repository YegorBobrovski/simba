/**
 * @section License
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2016, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#include "simba.h"

#include "mbedtls/config.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/certs.h"
#include "mbedtls/x509.h"
#include "mbedtls/ssl.h"
#include "mbedtls/ssl_cookie.h"
#include "mbedtls/net_sockets.h"
#include "mbedtls/error.h"
#include "mbedtls/debug.h"
#include "mbedtls/timing.h"

void mbedtls_ssl_cookie_init(mbedtls_ssl_cookie_ctx *ctx_p)
{
}

void mbedtls_ssl_init(mbedtls_ssl_context *ssl_p)
{
}

void mbedtls_ssl_config_init(mbedtls_ssl_config *conf_p)
{
}

void mbedtls_x509_crt_init(mbedtls_x509_crt *crt_p)
{
}

void mbedtls_pk_init(mbedtls_pk_context *ctx_p)
{
}

void mbedtls_entropy_init(mbedtls_entropy_context *ctx_p)
{
}

void mbedtls_ctr_drbg_init(mbedtls_ctr_drbg_context *ctx_p)
{
}

int mbedtls_x509_crt_parse(mbedtls_x509_crt *chain_p,
                           const unsigned char *buf_p,
                           size_t buflen)
{
    return (0);
}

int mbedtls_pk_parse_key(mbedtls_pk_context *ctx_p,
                         const unsigned char *key_p,
                         size_t keylen,
                         const unsigned char *pwd_p,
                         size_t pwdlen)
{
    return (0);
}

int mbedtls_ssl_config_defaults(mbedtls_ssl_config *conf_p,
                                int endpoint,
                                int transport,
                                int preset)
{
    return (0);
}

int mbedtls_ctr_drbg_random(void *rng_p,
                            unsigned char *output_p,
                            size_t output_len)
{
    return (0);
}

void mbedtls_ssl_conf_rng(mbedtls_ssl_config *conf,
                          int (*f_rng)(void *, unsigned char *, size_t),
                          void *p_rng )
{
}

void mbedtls_ssl_conf_ca_chain(mbedtls_ssl_config *conf_p,
                               mbedtls_x509_crt *ca_chain,
                               mbedtls_x509_crl *ca_crl)
{
}

int mbedtls_ssl_conf_own_cert(mbedtls_ssl_config *conf_p,
                              mbedtls_x509_crt *own_cert,
                              mbedtls_pk_context *pk_key)
{
    return (0);
}

int mbedtls_ssl_setup(mbedtls_ssl_context *ssl_p,
                      const mbedtls_ssl_config *conf_p)
{
    return (0);
}

void mbedtls_ssl_set_bio(mbedtls_ssl_context *ssl_p,
                         void *p_bio,
                         mbedtls_ssl_send_t *f_send,
                         mbedtls_ssl_recv_t *f_recv,
                         mbedtls_ssl_recv_timeout_t *f_recv_timeout )
{
}

int mbedtls_ssl_handshake(mbedtls_ssl_context *ssl_p)
{
    return (0);
}

void mbedtls_ssl_free(mbedtls_ssl_context *ssl_p)
{
}

int mbedtls_ssl_write(mbedtls_ssl_context *ssl_p,
                      const unsigned char *buf_p,
                      size_t len)
{
    if (len == 6) {
        return (6);
    }

    if (len == 8) {
        return (8);
    }

    return (-1);
}

int mbedtls_ssl_read(mbedtls_ssl_context *ssl_p,
                     unsigned char *buf_p,
                     size_t len)
{
    if (len == 8) {
        strcpy((char *)buf_p, "goodbye");
        return (8);
    } else if (len == 6) {
        strcpy((char *)buf_p, "hello");
        return (6);
    }
    
    return (-1);
}

int mbedtls_entropy_func(void *data_p,
                         unsigned char *output_p,
                         size_t len)
{
    return (0);
}

int mbedtls_ctr_drbg_seed(mbedtls_ctr_drbg_context *ctx_p,
                          int (*f_entropy)(void *, unsigned char *, size_t),
                          void *p_entropy,
                          const unsigned char *custom,
                          size_t len)
{
    return (0);
}

int mbedtls_ssl_close_notify(mbedtls_ssl_context *ssl_p)
{
    return (0);
}

size_t mbedtls_ssl_get_bytes_avail(const mbedtls_ssl_context *ssl_p)
{
    return (0);
}

uint32_t mbedtls_ssl_get_verify_result(const mbedtls_ssl_context *ssl_p)
{
    return (0);
}

void mbedtls_ssl_conf_authmode(mbedtls_ssl_config *conf_p, int authmode)
{
}
