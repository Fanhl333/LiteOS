/*----------------------------------------------------------------------------
 * Copyright (c) <2016-2018>, <Huawei Technologies Co., Ltd>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, this list of
 * conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list
 * of conditions and the following disclaimer in the documentation and/or other materials
 * provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific prior written
 * permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *---------------------------------------------------------------------------*/
 /*----------------------------------------------------------------------------
 * Notice of Export Control Law
 * ===============================================
 * Huawei LiteOS may be subject to applicable export control laws and regulations, which might
 * include those applicable to Huawei LiteOS of U.S. and the country in which you are located.
 * Import, export and usage of Huawei LiteOS in any manner by you shall be in compliance with such
 * applicable export control laws and regulations.
 *---------------------------------------------------------------------------*/

/* Define to prevent recursive inclusion ------------------------------------*/
#ifndef __TEST_BC95_H__
#define __TEST_BC95_H__

/* Includes -----------------------------------------------------------------*/
#include <cpptest.h>
#include "stub.h"

/* Defines ------------------------------------------------------------------*/
/* Macros -------------------------------------------------------------------*/
/* Typedefs -----------------------------------------------------------------*/
/* Extern variables ---------------------------------------------------------*/
/* Functions API ------------------------------------------------------------*/
class TestBC95 : public Test::Suite
{
public:
    TestBC95();
    ~TestBC95();

    void test_str_to_hex(void);
	void test_strnstr(void);
	void test_HexStrToStr(void);
	void test_nb_check_csq(void);
    void test_nb_reboot(void);
    void test_nb_hw_detect(void);
    void test_nb_set_cdpserver(void);
    void test_nb_send_psk(void);
	void test_nb_set_no_encrypt(void);
    void test_nb_send_payload(void);
    void test_nb_query_ip(void);
	void test_nb_create_sock(void);
	void test_nb_decompose_str(void);
	void test_nb_bind(void);
    void test_nb_get_netstat(void);
    void test_nb_create_udpsock(void);
    void test_nb_connect(void);
	void test_nb_send(void);
	void test_nb_reattach(void);
	void test_nb_recv(void);
	void test_nb_recvfrom(void);
	void test_nb_recv_timeout(void);
	void test_nb_close(void);
	void test_nb_recv_cb(void);
	void test_nb_deinit(void);
    void test_nb_send_str(void);
    void test_nb_data_ioctl(void);
	void test_nb_cmd_match(void);
	void test_nb_handle_sock_data(void);
	void test_nb_int(void);
	void test_nb_step(void);

};


#endif /* __TEST_ESP8266_H__ */
