// Copyright (c) 2014-2019, The MoneroDollar Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "hardforks.h"

#undef MONERODOLLAR_DEFAULT_LOG_CATEGORY
#define MONERODOLLAR_DEFAULT_LOG_CATEGORY "blockchain.hardforks"

const hardfork_t mainnet_hard_forks[] = {
  // version 1 from the start of the blockchain 2019 December 11 Wednesday AM 8:52:56
  { 1, 1, 0, 1576054376 },

  // version 2 starts from block 20, which is on or around  2019 December 11 Wednesday AM 8:53:56. No fork voting occurs for the v2 fork.
  { 2, 20, 0, 1576054436 },

  // version 3 starts from block 40, which is on or around 2019 December 11 Wednesday AM 8:55:56.
  { 3, 40, 0, 1576054556 },

  // version 4 starts from block 60, which is on or around 2019 December 11 Wednesday AM 9:10:56
  { 4, 60, 0, 1576055456 },

  // version 5 starts from block 80, which is on or around 2019 December 11 Wednesday AM 9:20:56
  { 5, 80, 0, 1576056056 }, 

  // version 6 starts from block 100, which is on or around 2019 December 11 Wednesday AM 9:30:56
  { 6, 100, 0, 1576056656 },

  // version 7 starts from block 120, which is on or around 2019 December 11 Wednesday AM 9:40:56
  { 7, 120, 0, 1576057256 },

  // version 8 starts from block 5800, which is on or around 2019 December 19 Thursday AM 9:40:56
  { 8, 5800, 0, 1576748456 },

  // version 9 starts from block 5850, which is on or around 2019 December 19 Thursday AM 11:40:56
  { 9, 5850, 0, 1576755656 },

  // version 10 starts from block 5900, which is on or around 2019 December 19 Thursday PM 1:40:56
  { 10, 5900, 0, 1576762856 },

  // version 11 starts from block 5950, which is on or around 2019 December 19 Thursday PM 2:40:56
  { 11, 5950, 0, 1576766456 },

  // version 12 starts from block 6000, which is on or around 2019 December 19 Thursday PM 3:40:56
  { 12, 6000, 0, 1576770056 },
};
const size_t num_mainnet_hard_forks = sizeof(mainnet_hard_forks) / sizeof(mainnet_hard_forks[0]);
const uint64_t mainnet_hard_fork_version_1_till = 1009826;

const hardfork_t testnet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  // version 2 starts from block 624634, which is on or around the 23rd of November, 2015. Fork time finalised on 2015-11-20. No fork voting occurs for the v2 fork.
  { 2, 624634, 0, 1445355000 },

  // versions 3-5 were passed in rapid succession from September 18th, 2016
  { 3, 800500, 0, 1472415034 },
  { 4, 801219, 0, 1472415035 },
  { 5, 802660, 0, 1472415036 + 86400*180 }, // add 5 months on testnet to shut the update warning up since there's a large gap to v6

  { 6, 971400, 0, 1501709789 },
  { 7, 1057027, 0, 1512211236 },
  { 8, 1057058, 0, 1533211200 },
  { 9, 1057778, 0, 1533297600 },
  { 10, 1154318, 0, 1550153694 },
  { 11, 1155038, 0, 1550225678 },
  { 12, 1308737, 0, 1569582000 },
};
const size_t num_testnet_hard_forks = sizeof(testnet_hard_forks) / sizeof(testnet_hard_forks[0]);
const uint64_t testnet_hard_fork_version_1_till = 624633;

const hardfork_t stagenet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  // versions 2-7 in rapid succession from March 13th, 2018
  { 2, 32000, 0, 1521000000 },
  { 3, 33000, 0, 1521120000 },
  { 4, 34000, 0, 1521240000 },
  { 5, 35000, 0, 1521360000 },
  { 6, 36000, 0, 1521480000 },
  { 7, 37000, 0, 1521600000 },
  { 8, 176456, 0, 1537821770 },
  { 9, 177176, 0, 1537821771 },
  { 10, 269000, 0, 1550153694 },
  { 11, 269720, 0, 1550225678 },
  { 12, 454721, 0, 1571419280 },
};
const size_t num_stagenet_hard_forks = sizeof(stagenet_hard_forks) / sizeof(stagenet_hard_forks[0]);
