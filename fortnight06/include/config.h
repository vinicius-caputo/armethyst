/* ----------------------------------------------------------------------------

    (EN) armethyst - A simple ARM Simulator written in C++ for Computer Architecture
    teaching purposes. Free software licensed under the MIT License (see license
    below).

    (PT) armethyst - Um simulador ARM simples escrito em C++ para o ensino de
    Arquitetura de Computadores. Software livre licenciado pela MIT License
    (veja a licença, em inglês, abaixo).

    (EN) MIT LICENSE:

    Copyright 2020 André Vital Saúde

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

   ----------------------------------------------------------------------------
*/

#pragma once

// Files
#define FILENAME "isummation.o"
#define STARTADDRESS 0x40

/*
 * Memory
 */

// Available Memory implementations
#define MEM_IMPL_BASIC 0  // BasicMemory
#define MEM_IMPL_COREI7 1 // Core i7 based memory hierarchy

// Memory implementation
#define MEM_IMPL MEM_IMPL_COREI7

// Memory whole size
#define MEMORY_SIZE 8388608

// Memory log output file
#define MEMORY_LOG_FILE "saida.txt"

/*
 * Processor
 */

// Available Processor implementations
#define PROC_IMPL_BASIC 0 // BasicProcessor

// Processor implementation
#define PROC_IMPL PROC_IMPL_BASIC

/*
 * Test levels
 */
#define TEST_LEVEL_START 0
#define TEST_LEVEL_IF 1
#define TEST_LEVEL_ID 2
#define TEST_LEVEL_EX 3
#define TEST_LEVEL_MEM 4
#define TEST_LEVEL_WB 5
#define TEST_LEVEL TEST_LEVEL_WB
 

